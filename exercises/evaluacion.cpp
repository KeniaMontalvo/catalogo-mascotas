#include <iostream>

int main()
{
    int calificacion;

    std::cout << "Ingrese calificación: ";
    std::cin >> calificacion;

    if (calificacion < 0 || calificacion > 10) {
        std::cout << "Error" << std::endl;
    } else if (calificacion == 10) {
        std::cout << "Excelente" << std::endl;
    } else if (calificacion == 9) {
        std::cout << "Muy bien" << std::endl;
    } else if (calificacion == 8) {
        std::cout << "Bien" << std::endl;
    } else if (calificacion == 7) {
        std::cout << "Regular" << std::endl;
    } else if (calificacion >= 0 && calificacion <= 6) {
        std::cout << "No acreditado" << std::endl;
    }
    return 0;
}