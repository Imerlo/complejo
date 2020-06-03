// Algoritmos y Programacion I - 75.02
// Curso Ing. Cardozo
// C++
// Módulo anfitrión para manejo de complejos

#include <iostream>
#include <string>
#include "complejo.h"


int main (void)
{
    Complex x,y(4.3,8.2);

    x = y ;
    cout << "Resultado: " << x << endl;

    string str;
    str << x << y <<z;
    cout << "resultado de la concatenacion: " << str ;
    cout << ".........." << endl << endl << endl;

    str = (string) x;
    cout << "Resultado del cast a aun string: " << str << endl;
    cout << "longitud de la cadena del cast: " << ((string) x).size() << endl;

    cout << "La parte real de x es: " << x.real() << endl;
    cout << "La parte real de x es: " << x.imag() << endl;
    cout << "Si se modifica el valor: " << endl;
    x.set_real(-555);
    cout << x << endl;


    return 0;
}
