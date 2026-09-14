/**
 * @file ejercicio_01.c
 * @brief Genera un arreglo de números aleatorios y cuenta
 *        cuántos de ellos son números primos.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int esPrimo(int numero) {

    if (numero < 2) {
        return 0;
    }

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int n;
    int arreglo[MAX];
    int cantidadPrimos = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 100 + 1;

        printf("%d ", arreglo[i]);

        if (esPrimo(arreglo[i])) {
            cantidadPrimos++;
        }
    }

    printf("\nCantidad de numeros primos: %d\n", cantidadPrimos);

    return 0;
}