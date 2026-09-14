/**
 * @file ejercicio_07.c
 * @brief Genera una matriz cuadrada, calcula las sumas de
 *        sus diagonales y determina cuál es mayor.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int sumaPrincipal = 0;
    int sumaSecundaria = 0;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);
    int matriz[n][n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][n - 1 - i];
    }
    printf("\nSuma diagonal principal: %d\n", sumaPrincipal);
    printf("Suma diagonal secundaria: %d\n", sumaSecundaria);
    
    if (sumaPrincipal > sumaSecundaria) {
        printf("La diagonal principal es mayor.\n");
    } else if (sumaSecundaria > sumaPrincipal) {
        printf("La diagonal secundaria es mayor.\n");
    } else {
        printf("Las diagonales tienen la misma suma.\n");
    }
    return 0;
}
    