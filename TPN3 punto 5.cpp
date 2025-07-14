#include <iostream>
using namespace std;

int main() {
    int cantidad, valor;
    int pares = 0, impares = 0;

    cout << "¿Cuántos numeros vas a ingresar?: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> valor;

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "\nTotal de numeros pares: " << pares << endl;
    cout << "Total de numeros impares: " << impares << endl;

    return 0;
}

