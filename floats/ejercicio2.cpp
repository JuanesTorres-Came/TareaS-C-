#include <iostream>
#define PI 3.1416
using namespace std;

int main() {
    float radio, area;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}
