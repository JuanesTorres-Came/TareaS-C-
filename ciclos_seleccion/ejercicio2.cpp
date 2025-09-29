#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Edad invalida." << endl;
    } else if (edad <= 12) {
        cout << "Es un niño 👶" << endl;
    } else if (edad <= 17) {
        cout << "Es un adolescente 👦" << endl;
    } else if (edad <= 64) {
        cout << "Es un adulto 🧑" << endl;
    } else {
        cout << "Es un adulto mayor 👴" << endl;
    }

    return 0;
}
