/**
 * @file ejercicio_10.c
 * @brief Gestiona información de estudiantes utilizando
 *        estructuras, punteros, arreglos dinámicos y funciones.
 * @author Aura Cárdenas
 * @date 2026-09-13
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 50

typedef struct {
    int id;
    char nombre[MAX_NOMBRE];
    float notas[3];
    float promedio;
} Estudiante;

float calcularPromedio(Estudiante *est) {
    return (est->notas[0] + est->notas[1] + est->notas[2]) / 3.0;
}

void ingresarDatos(Estudiante *est, int id) {
    est->id = id;
    printf("\n--- Estudiante %d ---\n", id);
    printf("Nombre: ");
    scanf(" %[^\n]", est->nombre); 
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &est->notas[i]);
        }
    }
    est->promedio = calcularPromedio(est);
}

void mostrarEstudiante(Estudiante *est) {
    printf("ID: %d | Nombre: %s | Promedio: %.2f\n",
           est->id, est->nombre, est->promedio);
}

int main() {
    int n;

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("La cantidad debe ser mayor que cero.\n");
        return 1;
    }
    Estudiante *estudiantes = (Estudiante *) malloc(n * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        ingresarDatos(&estudiantes[i], i + 1);
    }
    printf("\n=== Promedios ===\n");
    for (int i = 0; i < n; i++) {
        mostrarEstudiante(&estudiantes[i]);
    }
    printf("\n=== Estudiantes Aprobados ===\n");
    int hayAprobados = 0;
    for (int i = 0; i < n; i++) {
        if (estudiantes[i].promedio >= 3.0) {
            mostrarEstudiante(&estudiantes[i]);
            hayAprobados = 1;
        }
    }
    if (!hayAprobados) {
        printf("Ningun estudiante aprobo.\n");
    }
    free(estudiantes);
    estudiantes = NULL;

    return 0;
}