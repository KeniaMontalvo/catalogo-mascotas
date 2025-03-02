#include <iostream>

int main()
{
    int cantidadArticulos;
    float total = 0;

    std::cout << "Ingrese la cantidad de artículos: ";
    std::cin >> cantidadArticulos;

    for (int i = 1; i <= cantidadArticulos; i++) {
        int cantidad;
        float precio;

        std::cout << "Artículo " << i << " cantidad ";
        std::cin >> cantidad;

        std::cout << "Artículo " << i << " precio ";
        std::cin >> precio;

        total += cantidad * precio;
    }

    std::cout << "Total a pagar $ " << total << std::endl;

    return 0;
}
