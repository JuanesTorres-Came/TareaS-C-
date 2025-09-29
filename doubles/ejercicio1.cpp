#include <iostream>
#include <iomanip> // para setprecision
using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    cout << "Su IMC es: " << imc << endl;

    return 0;
}
