//
// Created by nacho on 05/11/2024.
//

#include "oferta.h"
#include <iostream>
#include <algorithm> // Para usar la función std::sort

    int oferta() {
        double precios[3];

        // Poner los precios
        std::cout << "Ingrese el precio del primer articulo: " << std::endl;
        std::cin >> precios[0];
        std::cout << "Ingrese el precio del segundo articulo: " << std::endl;
        std::cin >> precios[1];
        std::cout << "Ingrese el precio del tercer articulo: " << std::endl;
        std::cin >> precios[2];

        // Ordenar los precios de menor a mayor
        std::sort(precios, precios + 3);

        // Suma
        double total = precios[1] + precios[2];

        //Total
        std::cout << "El total a pagar bajo la promocion es:" << total << std::endl;

        return 0;
    }

