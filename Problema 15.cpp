#include<iostream>
using namespace std;

//C++ Ejercicio 61 Capitulo 3. 

//Calcular el area superficial de un cilindro.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

int main()
{
float pi = 3.14;
float volumen;
float radio;
float altura;

cout<<"Conseguir el Volumen del cilindro";

cout<<"\nIngresa el valor del radio de la base: ";
cin>>radio;
cout<<"\nIngresa el valor de la altura del cilindro: ";
cin>>altura;

volumen= (2*pi)*(radio*radio);
volumen= altura + volumen;

return volumen;

}