#include <iostream>

int main()
{
    //Declarar variables
    int opcionMascota, opcionCategoria;

    // Menú de selección de tipo de mascota
    std::cout << "Bienvenido a la tienda de mascotas\n";
    std::cout << "Seleccione el tipo de mascota:\n";
    std::cout << "1. Perro\n";
    std::cout << "2. Pez\n";
    std::cout << "3. Conejo\n";
    std::cout << "4. Gato\n";
    std::cout << "5. Salir\n";
    std::cout << "Ingrese el número de su opción: ";
    std::cin >> opcionMascota;
    
    if (opcionMascota < 1 || opcionMascota > 5) {
        std::cout << "Opción no válida.\n" << std::endl;
    }

    if (opcionMascota == 5) {
        std::cout << "Gracias por visitar la tienda.\n" << std::endl;
    }

    // Menú de selección de categoría de productos
    std::cout << "\nSeleccione la categoría de productos:\n";
    std::cout << "1. Comida\n";
    std::cout << "2. Juguetes\n";
    std::cout << "3. Medicamentos\n";
    std::cout << "4. Casas/Hogar\n";
    std::cout << "5. Donaciones\n";
    std::cout << "Ingrese el número de su opción: ";
    std::cin >> opcionCategoria;

    if (opcionCategoria < 1 || opcionCategoria > 5) {
        std::cout << "Opción no válida.\n" << std::endl;
    }

    // Mensaje de la selección
    std::cout << "\nHa seleccionado ";

    switch (opcionMascota) {
        case 1: std::cout << "Perro"; break;
        case 2: std::cout << "Pez"; break;
        case 3: std::cout << "Conejo"; break;
        case 4: std::cout << "Gato"; break;
    }

    std::cout << " en la categoría ";

    switch (opcionCategoria) {
        case 1: std::cout << "Comida."; break;
        case 2: std::cout << "Juguetes."; break;
        case 3: std::cout << "Medicamentos."; break;
        case 4: std::cout << "Casas/Hogar."; break;
        case 5: std::cout << "Donaciones."; break;
    }

    std::cout << "\nGracias por su compra o apoyo.\n";

    return 0;
}