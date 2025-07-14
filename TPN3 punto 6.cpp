#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    cout << "Numeros pares entre 1 y 100:" << endl;

    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
        suma += i;
    }

    cout << "\n\nSumatoria total: " << suma << endl;

    return 0;
}

