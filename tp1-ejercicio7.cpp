#include <iostream>
using namespace std;

int main() {
    double saldo = 1842.0;
    int opcion;
    double monto;

    do {
        cout << "==== Cajero Automatico ====" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 3:
                cout << "Ingrese monto a retirar: $";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "No tiene suficiente saldo o monto invalido." << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero. Hasta luego." << endl;
                break;

            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while(opcion != 4);

    return 0;
}

