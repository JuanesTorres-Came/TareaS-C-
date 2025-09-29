#include <iostream>
using namespace std;

int main() {
    int anio;
    bool esBisiesto;

    cout << "Ingrese un año: ";
    cin >> anio;

    esBisiesto = ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) );

    if (esBisiesto) {
        cout << anio << " Es un año bisiesto ✅" << endl;
    } else {
        cout << anio << " No es un año bisiesto ❌" << endl;
    }

    return 0;
}
