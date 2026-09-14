/**
 * @file ejercicio_06.c
 * @brief Invierte los elementos de un arreglo utilizando
 *        aritmética de punteros.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */
#include <stdio.h>
#include <stdlib.h>
int* invertir_arreglo(int* arreglo, int tamano){
   int* reverso=malloc(tamano*sizeof(int));
   int i=0;
   while (i<tamano){
       *(reverso + i) = *(arreglo + (tamano - 1 - i));
       i++;
   }
   return reverso;
}
int main(){
    int arreglo[5]={1,2,3,4,5};
    int* resultado=invertir_arreglo(arreglo, 5);
    
    for(int i = 0; i < 5; i++){
        printf("%d ", *(resultado + i));
    }

    free(resultado);

    return 0;
}
