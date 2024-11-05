//
// Created by nacho on 05/11/2024.
//

#include "notas.h"
#include <iostream>
using namespace std;

int nota() {
    int num_ejercicio = 8;  // Numero total de ejercicios
    double calificacion, suma = 0; // Variables para almacenar la calificación y la suma total

    // Pide las notas de los ejercicios
    for (int i = 1; i <= num_ejercicio; ++i) {
        cout << "Ingrese la nota del ejercicio " << i << " (entre 0 y 10): ";
        cin >> calificacion;

        // Verificar
        while (calificacion < 0 || calificacion > 10) {
            cout << "Nota invalida. Ingrese un valor entre 0 y 10: ";
            cin >> calificacion;
        }

        suma += calificacion;  // Sumamos la calificación al total
    }

    // Calculamos el promedio
    double promedio = suma / num_ejercicio;

    cout << "El promedio de las calificaciones es: " << promedio << endl;


}
