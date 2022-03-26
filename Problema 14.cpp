#include<iostream>
using namespace std;

//C++ Ejercicio 60 Capitulo 3. 

//Conseguir e imprimir el volumen de un cilindro.

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

volumen = (radio*radio)*pi;
volumen = volumen*altura;

return volumen;

}