quicksort:
    # Comprueba si el arreglo está vacío
    beqz $a0, quicksort_exit

    # Elige un pivote
    jal rand
    lw $t0, ($sp)

    # Divide el arreglo en dos subconjuntos
    jal particion

    # Ordena el subconjunto izquierdo
    addi $a0, $a0, -1
    call quicksort

    # Ordena el subconjunto derecho
    addi $a0, $v1, 1
    call quicksort

quicksort_exit:
    jr $ra