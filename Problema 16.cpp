#include <stdio.h>
#include<iostream>
#include <conio.h>

//C++ Ejercicio 6 Capitulo 5. 

//Convertir numeros romanos a arabigos.

// Siordia Ramirez Blas Benjamin @SrBenji15  15/03/2022

void main()
{
char op;
clrscr();

printf("Introduzca el numero romano que quiera convertir a arabigos");
scanf("%c"&op);

switch(op)
{
case 'I' : printf("1");
            breack;

case 'V' : printf("5");
            breack;

case 'X' : printf("10");
            breack;

case 'L' : printf("50");
            breack;

case 'C' : printf("100");
            breack;

case 'M' : printf("1000");
            breack;
}
getch();
}