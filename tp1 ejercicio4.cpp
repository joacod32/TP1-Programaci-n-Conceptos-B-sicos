#include <iostream>
using namespace std;

int main(){
	int n;
    cout << "¿Cuantos numeros desea ingresar? ";
    cin >> n;

    double suma = 0;
    for (int i = 0; i < n; i++) {
        double numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        suma += numero;
    }

    double promedio = suma / n;
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    return 0;
    
}
