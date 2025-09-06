#include "Carrito.h"

// Constructor
Carrito::Carrito() {
    numeroProductos = 0;
}

// Getters
Producto Carrito::getProducto(int pos) {
    if (pos>0 && pos<numeroProductos) {
        return productos[pos];
    }
    Producto p;
    return p;
}

int Carrito::getCantidad(int pos) {
    if (pos>0 && pos<numeroProductos) {
        return cantidades[pos];
    }
    return 0;
}

// Adicionales 
void Carrito::agregaProducto(Producto& p, int cant) {
    if (numeroProductos<MAX) {
        productos[numeroProductos] = p;
        cantidades[numeroProductos] = cant;
        numeroProductos++; 
    }
}

double Carrito::calculaTotal() {
    float total = 0;
    for (int i=0; i<numeroProductos; i++) {
        total += productos[i].getPrecio() * cantidades[i];
    }
    return total;
}

void Carrito::imprimeTicket() {
    std::cout << "-------- TICKET --------" << std::endl;
    std::cout << "Producto  ------  Precio  ------  Cantidad  ------  Subtotal" << std::endl;
    for (int i=0; i<numeroProductos; i++) {
        productos[i].imprime(); 
        std::cout << " ------ " << cantidades[i] << " ------ " << productos[i].getPrecio() * cantidades[i] << std::endl;
    }
    double total = calculaTotal();
    std::cout << "Total: " << total << std::endl;
}
