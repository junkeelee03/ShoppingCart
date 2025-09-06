#pragma once
#include "Producto.h"

class Carrito {
    public: 
        // Constante estatica de la clase
        static const int MAX = 10;

        // Constructor 
        Carrito();

        // Getters (acceder un elemento dentro de los arreglos)
        Producto getProducto(int);
        int getCantidad(int);

        // Adicionales
        void agregaProducto(Producto&, int);
        double calculaTotal();
        void imprimeTicket();

    private: 
        Producto productos[MAX];
        int cantidades[MAX];
        int numeroProductos; 
};