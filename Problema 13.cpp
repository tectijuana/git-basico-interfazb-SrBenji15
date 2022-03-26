#include<iostream>
using namespace std;

//C++ Ejercicio 59 Capitulo 3. 

//Conseguir e imprimir el volumen de un cilindro.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
int radio = 10;
float pi = 3.14;
int altura = 32;
int volumen;

cout<<"Conseguir el Volumen del cilindro";

volumen = (radio*radio)*pi;
volumen = volumen*altura;

return volumen;

}