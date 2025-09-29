#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << (a + b) << endl;
            break;
        case '-':
            cout << "Resultado: " << (a - b) << endl;
            break;
        case '*':
            cout << "Resultado: " << (a * b) << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Resultado: " << (a / b) << endl;
            else
                cout << "Error: division entre 0 no permitida." << endl;
            break;
        default:
            cout << "Operacion no valida." << endl;
    }

    return 0;
}
