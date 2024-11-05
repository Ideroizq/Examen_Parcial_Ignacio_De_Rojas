//
// Created by nacho on 05/11/2024.
//

#include "identificacion.h"
#include <iostream>

using namespace std;

int identificacion() {
    int a;


    cout << "Escriba un numero entero: ";
    cin >> a; // Se inserta el numero entero


    if (a > 0) {
        cout << "El numero es positivo." << endl; // Se imprime si el numero mayor que 0
    } else if (a < 0) {
        cout << "El numero es negativo." << endl; // Se imprime si el numero es menor que 0
    } else {
        cout << "El numero es cero." << endl; // Se imprime si el numero es 0
    }
}
