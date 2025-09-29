#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0, promedio;
    int cantidad = 5;

    cout << "Ingrese " << cantidad << " notas:\n";
    for (int i = 0; i < cantidad; i++) {
        cin >> nota;
        suma += nota;
    }

    promedio = suma / cantidad;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
