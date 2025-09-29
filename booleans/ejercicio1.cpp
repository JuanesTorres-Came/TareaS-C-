#include <iostream>
#include <string>
using namespace std;

int main() {
    string claveCorrecta = "Torres123";
    string claveIngresada;
    bool accesoPermitido;

    cout << "Ingrese la contraseña: ";
    cin >> claveIngresada;

    accesoPermitido = (claveIngresada == claveCorrecta);

    if (accesoPermitido) {
        cout << "Acceso concedido ✅" << endl;
    } else {
        cout << "Acceso denegado ❌" << endl;
    }

    return 0;
}
