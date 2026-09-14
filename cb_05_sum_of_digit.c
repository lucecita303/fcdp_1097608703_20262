/**
 * @file ejercicio_05.c
 * @brief Calcula recursivamente la suma de los dígitos
 *        de un número entero positivo.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */
#include <stdio.h>
int suma_digitos(int numero){
    if (numero<10){
        return numero;
    }
    return (numero%10)+suma_digitos(numero/10);
}
int main(){
    int resultado=suma_digitos(7965);
    printf("resultado: %d", resultado);
}
