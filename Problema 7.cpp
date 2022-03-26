#include<iostream>
using namespace std;

//C++ Ejercicio 20 Capitulo 3. 

//Introducir las longitudes de los lados de un triangulo. Encontrar Area.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
    double base, altura, area;

    cout << "Area de un Triangulo";

    cout << "\nBase:  ";
    cin >> base;

    cout << "\nAltura: ";
    cin >> altura;

    area = (base*altura)/2 ;

    cout << "El area del triangulo es de: " << area << " u^3 ";

    return area;
}
