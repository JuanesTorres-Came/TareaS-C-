#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nNumeros repetidos en el array:\n";
    bool encontrado = false;

    for (int i = 0; i < n; i++) {
        int contador = 1;
        if (arr[i] != -1) { 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    contador++;
                    arr[j] = -1; // marcar como contado
                }
            }
            if (contador > 1) {
                cout << "El numero " << arr[i] << " se repite " << contador << " veces.\n";
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "No hay numeros repetidos.\n";
    }

    return 0;
}
