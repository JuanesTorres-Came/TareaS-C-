#include <iostream>
using namespace std;

int main() {
    int n, numero, pares = 0, impares = 0;

    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        if (numero % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}
