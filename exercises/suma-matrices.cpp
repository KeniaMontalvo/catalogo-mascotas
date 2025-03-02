#include <iostream>

// Función para llenar una matriz
int llenarMatriz(int matriz[][3], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el valor de a" << i + 1 << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
        return 0;
    }
    return 0;
}

// Función para calcular la suma de dos matrices
int sumarMatrices(int matrizA[][3], int matrizB[][3], int matrizC[][3], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
        return 0;
    }
    return 0;
}

//Función para mostrar una matriz
int mostrarMatriz(int matriz[][3], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "C" << i + 1 << j + 1 << " = " << matriz[i][j] << std::endl;
        }
        return 0;
    }
    return 0;
}

int main() {
    
    //Título del programa
    printf("Programa para sumar matrices (máximo 3 filas y 3 columnas) \n");
    int filas, columnas;

    //Obtener las dimensiones de las matrices
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    //Crear las matrices A, B y C
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];

    // Llenar las matrices A y B
    std::cout << "\nMatriz A\n";
    llenarMatriz(matrizA, filas, columnas);
    std::cout << "\nMatriz B\n";
    llenarMatriz(matrizB, filas, columnas);

    // Calcular la suma de las matrices
    sumarMatrices(matrizA, matrizB, matrizC, filas, columnas);

    // Mostrar la matriz resultante C
    std::cout << "\nMatriz C = Matriz A + Matriz B\n";
    mostrarMatriz(matrizC, filas, columnas);

    return 0;
}