#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0, maximo, minimo;
    double promedio;

    cout << "Ingrese el primer valor: ";
    cin >> numero;

    suma = numero;
    maximo = numero;
    minimo = numero;

    for (int i = 2; i <= 10; i++) {
        cout << "Ingrese el valor " << i << ": ";
        cin >> numero;

        suma += numero;
        if (numero > maximo) maximo = numero;
        if (numero < minimo) minimo = numero;
    }

    promedio = suma / 10;

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Máximo valor: " << maximo << endl;
    cout << "Mínimo valor: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
 
