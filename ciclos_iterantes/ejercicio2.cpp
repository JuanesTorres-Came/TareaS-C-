#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int numeroSecreto = rand() % 10 + 1; // numero entre 1 y 10
    int intento;

    do {
        cout << "Adivine el numero (1-10): ";
        
        // Validar que el usuario escriba un numero
        if (!(cin >> intento)) {
            cout << "Entrada invalida, por favor ingrese un numero.\n";
            cin.clear();             // limpia el error
            cin.ignore(1000, '\n');  // descarta lo que haya en el buffer
            continue;                // vuelve a pedir el número
        }

        if (intento < numeroSecreto) {
            cout << "Muy bajo, intenta otra vez.\n";
        } else if (intento > numeroSecreto) {
            cout << "Muy alto, intenta otra vez.\n";
        } else {
            cout << "¡Correcto! 🎉 El numero era " << numeroSecreto << endl;
        }

    } while (intento != numeroSecreto);

    return 0;
}
