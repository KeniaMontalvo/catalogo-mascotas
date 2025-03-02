#include <iostream>

    // Función para llenar el arreglo con las calificaciones
int llenarArreglo(float calificaciones[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Ingresa la calificación " << i + 1 << ": ";
        std::cin >> calificaciones[i];
    }
    return 0;
}

// Función para calcular el promedio de las calificaciones
float calcularPromedio(float calificaciones[], int n) {
    float suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += calificaciones[i];
    }
    return suma / n;
}

int main() {
    int n;

    //Cantidad de calificaciones a ingresar
    std::cout << "¿Cuántas calificaciones desea ingresar? ";
    std::cin >> n;

    //Arreglo para almacenar las calificaciones
    float calificaciones[n];

    //Función para llenar el arreglo
    llenarArreglo(calificaciones, n);
    
    //Función para calcular el promedio
    float promedio = calcularPromedio(calificaciones, n);

    // Mostrar el promedio
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}