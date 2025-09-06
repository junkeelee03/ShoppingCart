#pragma once
#include <iostream>

class Cliente {
    public: 
        // Constructores
        Cliente();
        Cliente(std::string, std::string, std::string);

        // Getters 
        std::string getNombre();
        std::string getEdad();
        std::string getDireccion();

        //Setters
        void setNombre(std::string);
        void setEdad(std::string);
        void setDireccion(std::string);

    private:
        std::string nombre;
        std::string edad; 
        std::string direccion;

};