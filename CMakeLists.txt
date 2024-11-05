cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_Ignacio_De_Rojas)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1 Ejercicio2 Ejercicio3 Ejercicio4)

add_executable(Examen_Parcial_Ignacio_De_Rojas
    Ejercicio1/identificacion.cpp
    Ejercicio1/identificacion.h
    Ejercicio2/semana.h
    Ejercicio2/semana.cpp
    Ejercicio3/notas.h
    Ejercicio3/notas.cpp
    Ejercicio4/oferta.h
    Ejercicio4/oferta.cpp
    main.cpp
)
