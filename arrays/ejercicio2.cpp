#include <iostream>
#include <cstring> // para strlen
using namespace std;

int main() {
    char palabra[50];
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int longitud = strlen(palabra);

    cout << "Palabra invertida: ";
    for (int i = longitud - 1; i >= 0; i--) {
        cout << palabra[i];
    }
    cout << endl;

    return 0;
}
