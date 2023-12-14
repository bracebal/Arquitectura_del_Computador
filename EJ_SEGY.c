#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define TRACE_HEADER_SIZE 240

int main() {
    int fd;
    struct stat fileStat;
    float *mapped;

    // Abrir archivo SEGY en modo lectura/escritura
    fd = open("arch.sgy", O_RDWR);
    if (fd < 0) {
        printf("Error al abrir el archivo SEGY\n");
        return 1;
    }

    // Obtener tamaño del archivo
    fstat(fd, &fileStat);

    // Mapear archivo en memoria
    mapped = mmap(NULL, fileStat.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (mapped == MAP_FAILED) {
        printf("Error al mapear el archivo\n");
        return 1;
    }

    // Saltar encabezado de la traza
    float *trace_data = mapped + TRACE_HEADER_SIZE / sizeof(float);

    // Invertir amplitudes de las muestras
    for (int i = 0; i < SAMPLES_PER_TRACE; ++i) {
        trace_data[i] *= -1.0;
    }

    // Actualizar datos en el archivo
    msync(mapped, fileStat.st_size, MS_SYNC);

    // Desmapear archivo
    munmap(mapped, fileStat.st_size);

    // Cerrar archivo
    close(fd);

    printf("Amplitudes invertidas en arch.sgy\n");

    return 0;
}
