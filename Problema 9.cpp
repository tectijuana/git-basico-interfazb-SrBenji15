#include<iostream>
using namespace std;

//C++ Ejercicio 38 Capitulo 3. 

//Introducir las longitudes de los lados de un cuadrado. Encontrar Area.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main ()
{
    int lado;
    int area;

    cout<< "Calcula el Area de un Cuadrado";

    cout<< "Ingresa el valor de los lados: ";
    cin>> lado;

    area = lado*lado;
    
    return area;

}