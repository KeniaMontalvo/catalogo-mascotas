#include <iostream> // Librería de entrada y salida de datos
#include <string>   // Librería para manejar strings

// Declaración de la estructura para los datos del producto
struct Producto {
    char tipoMascota[15];    //Tipo de mascota (Perro, Gato, etc.)
    char categoria[20];      //Categoría (Comida, Juguetes, etc.)
    char nombreProducto[30]; //Nombre del producto
    float precio;            // Precio del producto
    int cantidad;            // Cantidad en inventario
};

int main() {
    // Encabezado del programa
    printf("Programa que muestra el catálogo de una tienda de animales\n");

    // Declarar el número de productos a solicitar (máximo 5)
    Producto catalogo[5];
    int numProductos;

    // Pedir la cantidad de productos a registrar (máximo 5)
    printf("\n¿Cuántos productos desea registrar? (Máximo 5): ");
    scanf("%d", &numProductos);

    if (numProductos > 5 || numProductos <= 0) {
        printf("\nCantidad inválida. Solo se permiten entre 1 y 5 productos.\n");
        return 0;
    }

    //Solicitar los datos de los productos
    for (int i = 0; i < numProductos; i++) {
        printf("\nProducto %d:\n", i + 1);

        printf("\nEscriba el tipo de mascota (Perro, Gato, etc.): ");
        scanf("%s", catalogo[i].tipoMascota);

        printf("\nEscriba la categoría (Comida, Juguetes, Medicamentos, etc.): ");
        scanf("%s", catalogo[i].categoria);

        printf("\nEscriba el nombre del producto: ");
        scanf("%s", catalogo[i].nombreProducto);

        printf("\nEscriba el precio del producto: ");
        scanf("%f", &catalogo[i].precio);

        printf("\nEscriba la cantidad en inventario: ");
        scanf("%d", &catalogo[i].cantidad);

        printf("\n"); //Salto de línea
    }

    // Mostrar los datos del catálogo
    printf("\n*********** Catálogo de Productos ***********\n");
    printf("Los productos registrados son:\n\n");

    for (int i = 0; i < numProductos; i++) {
        printf("Producto %d:\n", i + 1);
        printf("\tTipo de mascota: %s\n", catalogo[i].tipoMascota);
        printf("\tCategoría: %s\n", catalogo[i].categoria);
        printf("\tNombre del producto: %s\n", catalogo[i].nombreProducto);
        printf("\tPrecio: %.2f\n", catalogo[i].precio);
        printf("\tCantidad en inventario: %d\n\n", catalogo[i].cantidad);
    }

    return 0;
}