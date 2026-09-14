
/**
 * @file ejercicio_08.c
 * @brief Asigna una calificación en letras a partir de
 *        una nota numérica entre 0 y 100.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */
#include <stdio.h>

int main() {

    int nota;

    printf("Ingrese la nota (0-100): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota invalida.\n");
    }
    else if (nota >= 90) {
        printf("Calificacion: A\n");
    }
    else if (nota >= 80) {
        printf("Calificacion: B\n");
    }
    else if (nota >= 70) {
        printf("Calificacion: C\n");
    }
    else if (nota >= 60) {
        printf("Calificacion: D\n");
    }
    else {
        printf("Calificacion: F\n");
    }

    return 0;
}