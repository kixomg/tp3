#include <iostream>
using namespace std;

int main() {
    int suma = 0, contador = 0;

    cout << "Numeros impares entre 1 y 300:" << endl;

    for (int i = 1; i <= 300; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            suma += i;
            contador++;
        }
    }

    cout << "\n\nTotal de numeros impares: " << contador << endl;
    cout << "Sumatoria de los impares: " << suma << endl;

    return 0;
}

