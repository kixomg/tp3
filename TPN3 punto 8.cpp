#include <iostream>
using namespace std;

int main() {
    int x, resultado = 1;

    cout << "Ingrese un numero: ";
    cin >> x;

    for (int i = 1; i <= 5; i++) {
        resultado *= x;
    }

    cout << x << " elevado a la quinta es igual a " << resultado << endl;

    return 0;
}

