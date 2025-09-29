#include <iostream>
#include <string>
#include <sstream> // para separar palabras
using namespace std;

int main() {
    string frase, palabra, palabraLarga;
    
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    stringstream ss(frase);
    while (ss >> palabra) {
        if (palabra.size() > palabraLarga.size()) {
            palabraLarga = palabra;
        }
    }

    cout << "La palabra mas larga es: " << palabraLarga << endl;

    return 0;
}
