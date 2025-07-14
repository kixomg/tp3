#include <iostream>
using namespace std;

int main() {
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero >= 0.01) {
        numero /= 2;
        cout << "Valor actual: " << numero << endl;
    }

    cout << "Proceso finalizado. El valor es menor que 0.01." << endl;

    return 0;
}

