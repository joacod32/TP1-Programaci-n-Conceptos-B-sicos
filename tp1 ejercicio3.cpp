#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;


    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    
    if (num1 < 10 && num2 < 10 && num3 < 10) {
        cout << "Todos los números son menores a diez" << endl;
    } else {
        cout << "smayor a 10" << endl;
    }

    return 0;
}

