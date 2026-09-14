/**
 * @file ejercicio_03.c
 * @brief Determina el mayor y el menor de tres números
 *        utilizando operadores ternarios.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    a=9;
    b=6;
    c=1;
    
    int mayor=(a>b && a>c)? a:(b>c?b:c);
    int menor=(a<b && a<c)? a:(b<c?b:c);
    
    printf("mayor=%d, menor=%d", mayor, menor);
}