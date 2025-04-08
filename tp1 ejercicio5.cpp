#include <iostream>
using namespace std;

int main() {
    int totalPreguntas, respuestasCorrectas, porcentaje;

    cout << "Ingrese la cantidad total de preguntas: ";
    cin >> totalPreguntas;

    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> respuestasCorrectas;

   
    if (respuestasCorrectas > totalPreguntas || totalPreguntas <= 0) {
        cout << "Error: Los datos ingresados no son válidos." << endl;
        return 1;
    }

   
    porcentaje = (respuestasCorrectas * 100) / totalPreguntas;

   
    cout << "Porcentaje de respuestas correctas: " << porcentaje << "%" << endl;
    if (porcentaje >= 90) {
        cout << "Nivel máximo" << endl;
    } else if (porcentaje >= 75) {
        cout << "Nivel medio" << endl;
    } else if (porcentaje >= 50) {
        cout << "Nivel regular" << endl;
    } else {
        cout << "Fuera de nivel" << endl;
    }

    return 0;
}

