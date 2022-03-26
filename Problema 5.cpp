#include <iostream>
using namespace std;

//C++ Ejercicio 19 Capitulo 3. 

//Introducir las longitudes de los lados de un triangulo. Encontrar Perimetro.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
    double lado1, lado2, lado3,perimetro;
    cout << "Perimetro de un Triangulo irregular ";
    cout << "\nLado 1:  ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3 ";
    cin >> lado3;

    perimetro=lado1+lado2+lado3;

    cout << "El perimetro del triangulo irregular es de: " << perimetro << " unidades ";

    return 0;
}
