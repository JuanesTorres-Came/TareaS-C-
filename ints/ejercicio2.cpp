#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 0;
    }

    cout << "Los divisores de " << numero << " son: ";
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
            contador++;
        }
    }

    cout << "\nCantidad de divisores: " << contador << endl;

    return 0;
}
