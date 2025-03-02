#include <iostream>

int main()
{
    //Declaración del arreglo
    int arreglo [4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};
    
    //Inicializar el ciclo para visualizar la matriz
    for(int fila = 0; fila <=3; fila++){ //Inicio de las filas
        for(int columna=0; columna <=3; columna++){ //Inicio de las columnas
            printf("%d ", arreglo[fila][columna]); //Impresión de la matriz
        }
        printf("\n"); //Salto de línea
    }
    return 0;
}