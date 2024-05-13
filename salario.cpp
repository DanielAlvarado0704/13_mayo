#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    int horas_trabajadas;
    double tarifa = 10.0;
    double salario_bruto, salario_neto, impuestos;

    // Pedir nombre del trabajador
    cout << "Ingrese el nombre del trabajador: ";
    getline(cin, nombre);

    // Pedir horas trabajadas
    cout << "Ingrese las horas trabajadas por " << nombre << ": ";
    cin >> horas_trabajadas;

    // Calcular salario bruto
    if (horas_trabajadas <= 160) {
        salario_bruto = horas_trabajadas * tarifa;
    } else {
        salario_bruto = 160 * tarifa + (horas_trabajadas - 160) * tarifa * 1.5;
    }

    // Calcular impuestos
    if (salario_bruto <= 2000) {
        impuestos = 0;
    } else if (salario_bruto <= 2200) {
        impuestos = salario_bruto * 0.2;
    } else {
        impuestos = salario_bruto * 0.3;
    }

    // Calcular salario neto
    salario_neto = salario_bruto - impuestos;

    // Mostrar resultados
    cout << "\nNombre del trabajador: " << nombre << endl;
    cout << "Salario bruto: $" << salario_bruto << endl;
    cout << "Impuestos: $" << impuestos << endl;
    cout << "Salario neto: $" << salario_neto << endl;

    return 0;
}
