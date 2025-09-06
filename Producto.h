#pragma once 
#include <iostream>

class Producto {
    public: 
        //Constructores 
        Producto();
        Producto(std::string, double);

        // Getters
        std::string getNombre();
        double getPrecio();

        // Setters
        void setNombre(std::string);
        void setPrecio(double);

        // Adicionales
        void imprime();

    private: 
        std::string nombre;
        double precio;
};