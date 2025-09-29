#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contador = 0;

    cout << "Ingrese una frase: ";
    getline(cin, texto);

    for (char c : texto) {
        c = tolower(c); // convertir a minúscula
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    cout << "La frase tiene " << contador << " vocales." << endl;

    return 0;
}
