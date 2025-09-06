#include "Cliente.h"

// Constructores
Cliente::Cliente() {
    nombre = "";
    edad = "";
    direccion = "";
}

Cliente::Cliente(std::string _nombre, std::string _edad, std::string _direccion) {
    nombre = _nombre;
    edad = _edad;
    direccion = _direccion;
}

// Getters
std::string Cliente::getNombre() {
    return nombre;
}

std::string Cliente::getEdad() {
    return edad;
}

std::string Cliente::getDireccion() {
    return direccion;
}

// Setters
void Cliente::setNombre(std::string _nombre) {
    nombre = _nombre;
}

void Cliente::setEdad(std::string _edad) {
    edad = _edad;
}

void Cliente::setDireccion(std::string _direccion) {
    direccion = _direccion;
}
