#include<iostream>
using namespace std;

//C++ Ejercicio 27 Capitulo 3. 

//Introducir las longitudes de los lados de un triangulo.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
    int lado1, lado2, lado3;

    cout<<"Lado #1: ";
    cin>> lado1;

    if(lado1<=100)
    {
        cout<<"Lado 1 mide: " + lado1;
    }else
    {
        cout<<"Dato Incorrecto";
    }

        cout<<"Lado #2: ";
    cin>> lado2;

    if(lado2<=100)
    {
        cout<<"Lado 2 mide: " + lado2;
    }else
    {
        cout<<"Dato Incorrecto";
    }

        cout<<"Lado #3: ";
    cin>> lado3;

    if(lado3<=100)
    {
        cout<<"Lado 3 mide: " + lado3;
    }else
    {
        cout<<"Dato Incorrecto";
    }
    

    return lado1, lado2, lado3;
}