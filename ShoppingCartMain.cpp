#include <iostream>
#include <fstream>
#include "Carrito.h"
#include "Cliente.h"
using namespace std;

void llenaInventario(Producto prod[], int &cantidad){
  float precio;
  string nombre;
  cantidad = 0;
  ifstream archivo;
  archivo.open("productos.txt");
  while(archivo >> nombre >> precio){ 
    prod[cantidad].setNombre(nombre);
    prod[cantidad].setPrecio(precio);
    cantidad++;
  }
  archivo.close();
}

void imprimeInventario(Producto prod[], int cantidad){
  for (int i=0;i<cantidad;i++) {
    cout << i << ". ";
    prod[i].imprime();
    cout << endl;
  }
}

void datosCliente(Cliente cliente) {
  string nombre, edad, direccion;
  cout << "Ingresar su primer nombre: ";
  cin >> nombre;
  cliente.setNombre(nombre);
  cout << "Ingresar su edad: ";
  cin >> edad;
  cliente.setEdad(edad);
  cout << "Ingresar su calle: ";
  cin >> direccion;
  cliente.setDireccion(direccion);
}

void agregarProducto(Carrito &miCarrito, Producto inventario[]) {
  int num, cant;
  cout << "Ingrese el número del producto deseado: "; 
  cin >> num;
  cout << "¿Cuántos quiere? ";
  cin >> cant;
  miCarrito.agregaProducto(inventario[num], cant);
}

int main(){
  char opc;
  const int MAX = 10;
  int cantProductos;
  Carrito miCarrito;
  Producto inventario[MAX];
  Cliente cliente;
  llenaInventario(inventario, cantProductos);
    
  do {
    system ("clear");
    cout << "-------- Bienvenid@ a Dulces Lee -------" << endl;
    cout << "Menú de opciones: " << endl;
    cout << "\t1. Introducir datos del cliente" << endl;
    cout << "\t2. Mostrar productos" << endl;
    cout << "\t3. Añadir producto" << endl;
    cout << "\t4. Imprimir ticket" << endl;
    cout << "\t5. Salir" << endl;
    cout << "Opción: ";
    cin >> opc;

    switch(opc){
      case '1':
        datosCliente(cliente);
        break;

      case '2': 
        imprimeInventario(inventario, cantProductos);
        break;

      case '3':
        imprimeInventario(inventario, cantProductos); 
        agregarProducto(miCarrito, inventario);
        break;

      case '4': 
        miCarrito.imprimeTicket();
        cout << "--- Regrese pronto! ---" << endl;
        break;

      case '5':
        cout << "Saliendo..." << endl;
        break;

      default: 
        cout << "Opción inválida." << endl;
  }
  cout << "Enter para continuar...";
  cin.ignore();
  cin.get();

}while(opc != '5');

}
