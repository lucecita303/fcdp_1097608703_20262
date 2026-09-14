/**
 * @file ejercicio_04.c
 * @brief Calcula el factorial de un número y determina
 *        si el resultado es par o impar.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */
 
#include <stdio.h>
int factorial(int numero){
    if(numero==1 || numero==0){
        return 1;
    }
    return numero* factorial(numero-1);
}

void espar(int numero){
    if (numero%2==0){
        printf("es par");
    }else{
        printf("es impar");
    }
}

int main()
{
    int resultado=factorial(3);
    printf("%d\n", resultado);
    espar(resultado);
}