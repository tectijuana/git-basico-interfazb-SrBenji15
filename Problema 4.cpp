#include <iostream>
using namespace std;

//C++ Ejercicio 76 Capitulo 3. Calcular el volumen de un trompo para valores de entrada r, a y b.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
    double perimetro, apotema, lado,area;
    int n;
    cout << "Area de un poligono regular ";
    cout << "\nNumero de lados del poligono regular ";
    cout << "Numero de lados del poligono regular ";
    cin >> n;
    cout << "Tamaño de cualquier lado del poligono regular ";
    cin >> lado;
    cout << "Apotema del poligono regular ";
    cin >> apotema;

    perimetro=lado*n;
    area=(perimetro*apotema)/2;

    cout << "El area del poligono regular de "<< n << " lados, es de: " << area << " unidades cuadradas";

    return 0;
}
