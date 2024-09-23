#include <iostream>
using namespace std;

float calcularDescuento(float precio) {
    if (precio >= 500) {
        return precio * 0.80; // 20% de descuento
    } else if (precio >= 200) {
        return precio * 0.90; // 10% de descuento
    } else {
        return precio; // Sin descuento
    }
}

int main() {
    float precioOriginal, precioFinal;

    cout << "Ingrese el precio original del producto: ";
    cin >> precioOriginal;

    precioFinal = calcularDescuento(precioOriginal);

    cout << "El precio final con descuento es: $" << precioFinal << endl;

    return 0;
}
