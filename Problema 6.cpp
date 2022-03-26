#include<iostream>
using namespace std;

//C++ Ejercicio 39 Capitulo 3. 

//Introducir las longitudes de los lados de un cuadrado. Encontrar Perimetro.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main ()
{
    int lado1, lado2, lado3, lado4;
    int perimetro;

    cout<< "Calcula el Perimetro de un Cuadrado";

    cout<< "Ingresa el valor de los lados: ";
    cin>> lado1;
    cin>> lado2;
    cin>> lado3;
    cin>> lado4;

    perimetro = lado1+lado2+lado3+lado4;
    
    return perimetro;

}