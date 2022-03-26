#include<iostream>
using namespace std;

//C++ Ejercicio 56 Capitulo 3. 

//Conseguir el area de una superficie de una esfera pero ingresando el valor del radio.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main ()
{

    float radio;
    double pi = 3.14;
    float area;

    cout<<"Calcular el area de la superficie de una esfera: ";
    cout<<"Ingresa el valor del radio: ";
    cin>>radio;

    area = (radio*radio)*pi;

    return area;
}
