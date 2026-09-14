/**
 * @file ejercicio_06.c
 * @brief Invierte los elementos de un arreglo utilizando
 *        aritmética de punteros.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */

#include <stdio.h>

void intercambiar(int *a, int *b) {

    int temporal = *a;
    *a = *b;
    *b = temporal;
}

int main() {
    int a=5;
    int b=6;
    
    int* x=&a;
    int* y=&b;
    
    intercambiar(x,y);
    
    printf("valor a=%d  valor b=%d",a,b);
}
    