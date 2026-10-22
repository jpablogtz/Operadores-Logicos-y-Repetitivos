#include <iostream>
#include <string>

using namespace std;

int main() {
    // =================================================================
    // Ejercicio 1: El validador de contraseñas (if / else)
    // =================================================================
    string contrasenaCorrecta = "secret123";
    string intentoUsuario = "secret123"; // Cambia este valor para probar

    // En C++ usamos == para comparar si dos textos son iguales
     if (intentoUsuario == contraseniaCorrecta) {
        cout << " Acceso concedido" << endl;
    } else {
        cout << " Acceso denegado" << endl;
    }

    // =================================================================
    // Ejercicio 2: El clasificador de edades (if, else if, else)
    // =================================================================
    int edad = 25; // 

    if (edad < 13) {
        cout << " Nino" << endl;
    } else if (edad >= 13 && edad <= 17) { 
        cout << " Adolescente" << endl;
    } else if (edad >= 18 && edad <= 64) {
        cout << " Adulto" << endl;
    } else {
        cout << " Adulto mayor" << endl;
    }

    // =================================================================
    // Ejercicio 3: El convertidor de calificaciones (if, else if)
    // =================================================================
    int nota = 85; 

    if (nota >= 90) {
        cout << "Ejercicio 3: A" << endl;
    } else if (nota >= 80) {
        cout << "Ejercicio 3: B" << endl;
    } else if (nota >= 70) {
        cout << "Ejercicio 3: C" << endl;
    } else if (nota >= 65) {
        cout << "Ejercicio 3: D" << endl;
    } else {
        cout << "Ejercicio 3: F" << endl;
    }

    // =================================================================
    // Ejercicio 4: El menu del dia (switch case)
    // =================================================================
    int dia = 3; // Cambia este valor del 1 al 5

    switch (dia) {
        case 1:
            cout << "Ejercicio 4: Lentejas" << endl;
            break; // Detiene el switch para que no ejecute los de abajo
        case 2:
            cout << "Ejercicio 4: Tacos" << endl;
            break;
        case 3:
            cout << "Ejercicio 4: Ensalada" << endl;
            break;
        case 4:
            cout << "Ejercicio 4: Pasta" << endl;
            break;
        case 5:
            cout << "Ejercicio 4: Hamburguesa" << endl;
            break;
        default: // Si el número no es del 1 al 5
            cout << "Ejercicio 4: Dia no valido" << endl;
    }

    return 0;
}
