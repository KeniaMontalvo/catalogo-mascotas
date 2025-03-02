#include <iostream>

// Función para determinar si un número es par o impar
int esPar(int numero) {
  // Utilizamos el operador módulo (%) para obtener el restante de la división entre 2
  if (numero % 2 == 0) {
    return true; // Si el restante es 0, el número es par
  } else {
    return false; // Si el restante es diferente de 0, el número es impar
  }
}

int main() {
  int numero;

  // Pedimos que se ingrese un número
  std::cout << "Ingrese el número a evaluar: ";
  std::cin >> numero;

  // Llamamos a la función esPar para evaluar si el número es par o impar
  if (esPar(numero)) {
    std::cout << "El número " << numero << " es par" << std::endl;
  } else {
    std::cout << "El número " << numero << " es impar" << std::endl;
  }

    return 0;
}