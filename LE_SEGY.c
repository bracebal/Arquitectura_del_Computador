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

    // Abrir archivo SEGY en modo lectura
    fd = open("arch.sgy", O_RDONLY);
    if (fd < 0) {
        printf("Error al abrir el archivo SEGY\n");
        return 1;
    }

    // Obtener tamaño del archivo
    fstat(fd, &fileStat);

    // Mapear archivo en memoria
    mapped = mmap(NULL, fileStat.st_size, PROT_READ, MAP_SHARED, fd, 0);
    if (mapped == MAP_FAILED) {
        printf("Error al mapear el archivo\n");
        return 1;
    }

    // Saltar encabezado de la traza
    float *trace_data = mapped + TRACE_HEADER_SIZE / sizeof(float);

    // Leer traza
    for (int i = 0; i < SAMPLES_PER_TRACE; ++i) {
        printf("Muestra %d: %.2f\n", i + 1, trace_data[i]);
    }

    // Desmapear archivo
    munmap(mapped, fileStat.st_size);

    // Cerrar archivo
    close(fd);

    return 0;
}
