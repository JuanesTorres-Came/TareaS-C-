#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pesosCol, tasaCambio = 4200.50, dolares;

    cout << "Ingrese la cantidad en pesos colombianos: ";
    cin >> pesosCol;

    dolares = pesosCol / tasaCambio;

    cout << fixed << setprecision(2);
    cout << pesosCol << " COP equivalen a $" << dolares << " USD" << endl;

    return 0;
}
