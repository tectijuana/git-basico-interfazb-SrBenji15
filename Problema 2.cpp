#include <iostream>
using namespace std;

/*C++ Ejercicio 23 Capitulo 2. Dado el numero de triunfos y derrotas de un equipo de beisbol, 
calcular su porcentaje de ganancias. Suponer que no hubo empates.*/

// Siordia Ramirez Blas Benjamin @SrBenji15 15/03/2022

int main() 
{
    string Equipo;
    float Ganar, Perder;
    float PGanancia;
    
    cout << "Dime el nombre del equipo de Beisbol\n";
    cin >> Equipo;
    
    cout << "Partidos que ganaron: \n";
    cin >> Ganar;
    
    cout << "Partidos que perdieron\n";
    cin >> Perder;
    
    PGanancia=(Ganar/(Ganar+Perder))*100;
    
    cout << "El equipo " << Equipo << " Gano " << Ganar << " de los "<< (Ganar + Perder) << " partidos, su porcentaje de triunfo es del " << PGanancia << "% ";
    return 0;
}
