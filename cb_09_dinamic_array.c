/**
 * @file ejercicio_09.c
 * @brief Crea un arreglo dinámico, almacena valores ingresados
 *        por el usuario y calcula su suma.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arreglo;
    int suma = 0;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("La cantidad debe ser mayor que cero.\n");
        return 1;
    }
    arreglo = (int *) malloc(n * sizeof(int));
    if (arreglo == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    printf("\nLa suma total de los elementos es: %d\n", suma);
    free(arreglo);
    arreglo = NULL;
    return 0;
}