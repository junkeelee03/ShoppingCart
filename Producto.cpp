#include "Producto.h"

// Constructores 
Producto::Producto() {
    nombre = "";
    precio = 0.0;
}

Producto::Producto(std::string _nombre, double _precio) {
    nombre = _nombre;
    precio = _precio;
}

// Getters
std::string Producto::getNombre() {
    return nombre;
}

double Producto::getPrecio() {
    return precio;
}

// Setters
void Producto::setNombre(std::string _nombre) {
    nombre = _nombre;
}

void Producto::setPrecio(double _precio) {
    precio = _precio;
}

// Adicionales
void Producto::imprime() {
    std::cout << nombre << "--- $" << precio;
}
