#include <iostream>

#include "potencia.h"

using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    CalculadoraPotencia calculadora;
    int resultado = calculadora.potencia(base, exponente);
    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
}
