#include <iostream>
using namespace std;

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int nota;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;

        if (nota >= 7) {
            aprobados += 1;
        } else {
            reprobados += 1;
        }
    }

    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;

    return 0;
}

