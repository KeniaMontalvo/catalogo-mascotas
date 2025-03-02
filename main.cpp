#include <iostream>
#include <string>
#include <cstring> //Para usar strcmp

//Declaración de la estructura para los datos del producto
struct Producto {
    char tipoMascota[15];
    char categoria[20];
    char nombreProducto[30];
    float precio;
    int cantidad;
};

//Variables globales
Producto catalogo[5]; //Arreglo de productos
int numProductos = 0; //Número actual de productos

//Llamadas de funciones
void altaProductos();
void bajaProductos();
void mostrarProductos();
void buscarProducto();
void modificarProducto();
void menuPrincipal();

int main() {
    menuPrincipal();
    return 0;
}

//Función para mostrar el menú principal
void menuPrincipal() {
    int opcion;
    do { //Ejecuta el código al menos una vez
        printf("\nMenú principal\n");
        printf("1. Alta de productos\n");
        printf("2. Baja de productos\n");
        printf("3. Modificar de productos\n");
        printf("4. Mostrar todos\n");
        printf("5. Buscar producto\n");
        printf("6. Salir\n\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) { //Elección del usuario
            case 1:
                altaProductos();
                break;
            case 2:
                bajaProductos();
                break;
            case 3:
                modificarProducto();
                break;
            case 4:
                mostrarProductos();
                break;
            case 5:
                buscarProducto();
                break;
            case 6:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpción inválida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 6);
}

//Función para dar de alta productos
void altaProductos() { //void no devuelve un valor en específico
    if (numProductos >= 5) {
        printf("\nEl catálogo está lleno. No se pueden agregar más productos.\n");
        return;
    }

    printf("\nAlta de producto %d:\n", numProductos + 1);

    printf("Escriba el tipo de mascota (Perro, Gato, etc.): ");
    scanf("%s", catalogo[numProductos].tipoMascota);

    printf("Escriba la categoría (Comida, Juguetes, etc.): ");
    scanf("%s", catalogo[numProductos].categoria);

    printf("Escriba el nombre del producto: ");
    scanf("%s", catalogo[numProductos].nombreProducto);

    printf("Escriba el precio del producto: ");
    scanf("%f", &catalogo[numProductos].precio);

    printf("Escriba la cantidad en inventario: ");
    scanf("%d", &catalogo[numProductos].cantidad);

    numProductos++;
    printf("\nProducto agregado correctamente.\n");
}

//Función para dar de baja productos
void bajaProductos() {
    if (numProductos == 0) {
        printf("\nEl catálogo está vacío. No hay productos para eliminar.\n");
        return;
    }

    char nombreBuscado[30];
    printf("\nIngrese el nombre del producto a eliminar: ");
    scanf("%s", nombreBuscado);

    //Buscar el producto
    for (int i = 0; i < numProductos; i++) {
        if (strcmp(catalogo[i].nombreProducto, nombreBuscado) == 0) {
            printf("\nProducto encontrado: %s\n", catalogo[i].nombreProducto);
            printf("¿Estás seguro de que deseas eliminar el producto?\n");
            printf("1. Sí\n2. No\n");
            int confirmacion;
            scanf("%d", &confirmacion);

            if (confirmacion == 1) {
                //Eliminar el producto 
                for (int j = i; j < numProductos - 1; j++) {
                    catalogo[j] = catalogo[j + 1];
                }
                numProductos--;
                printf("\nProducto eliminado correctamente.\n");
                return;
            } else if (confirmacion == 2) {
                printf("\nEliminación cancelada. Regresando al menú principal.\n");
                return;
            } else {
                printf("\nOpción inválida. Regresando al menú principal.\n");
                return;
            }
        }
    }

    //Producto no encontrado
    printf("\nEl producto no se encuentra en el catálogo.\n");
}

//Función para mostrar todos los productos
void mostrarProductos() {
    if (numProductos == 0) {
        printf("\nEl catálogo está vacío.\n");
        return;
    }

    printf("\n*********** Catálogo de Productos ***********\n");
    for (int i = 0; i < numProductos; i++) {
        printf("Producto %d:\n", i + 1);
        printf("\tTipo de mascota: %s\n", catalogo[i].tipoMascota);
        printf("\tCategoría: %s\n", catalogo[i].categoria);
        printf("\tNombre del producto: %s\n", catalogo[i].nombreProducto);
        printf("\tPrecio: %.2f\n", catalogo[i].precio);
        printf("\tCantidad en inventario: %d\n\n", catalogo[i].cantidad);
    }
}

//Función para buscar un producto
void buscarProducto() {
    if (numProductos == 0) {
        printf("\nEl catálogo está vacío.\n");
        return;
    }

    char nombreBuscado[30];
    printf("\nIngrese el nombre del producto a buscar: ");
    scanf("%s", nombreBuscado);

    //Buscar el producto
    for (int i = 0; i < numProductos; i++) {
        if (strcmp(catalogo[i].nombreProducto, nombreBuscado) == 0) {
            printf("\nProducto encontrado:\n");
            printf("\tTipo de mascota: %s\n", catalogo[i].tipoMascota);
            printf("\tCategoría: %s\n", catalogo[i].categoria);
            printf("\tNombre del producto: %s\n", catalogo[i].nombreProducto);
            printf("\tPrecio: %.2f\n", catalogo[i].precio);
            printf("\tCantidad en inventario: %d\n", catalogo[i].cantidad);
            return;
        }
    }

    //Producto no encontrado
    printf("\nEl producto no se encuentra en el catálogo.\n");
}

// Función para modificar productos
void modificarProducto() {
    if (numProductos == 0) {
        printf("\nEl catálogo está vacío. No hay productos para modificar.\n");
        return;
    }

    char nombreBuscado[30];
    printf("\nIngrese el nombre del producto a modificar: ");
    scanf("%s", nombreBuscado);

    // Buscar el producto
    for (int i = 0; i < numProductos; i++) {
        if (strcmp(catalogo[i].nombreProducto, nombreBuscado) == 0) {
            printf("\nProducto encontrado: %s\n", catalogo[i].nombreProducto);
            printf("¿Qué campo deseas modificar?\n");
            printf("1. Tipo de mascota\n");
            printf("2. Categoría\n");
            printf("3. Nombre del producto\n");
            printf("4. Precio\n");
            printf("5. Cantidad en inventario\n");
            printf("6. Cancelar\n");
            int opcion;
            scanf("%d", &opcion);

            switch (opcion) {
                case 1:
                    printf("Nuevo tipo de mascota: ");
                    scanf("%s", catalogo[i].tipoMascota);
                    printf("Tipo de mascota modificado correctamente.\n");
                    break;
                case 2:
                    printf("Nueva categoría: ");
                    scanf("%s", catalogo[i].categoria);
                    printf("Categoría modificada correctamente.\n");
                    break;
                case 3:
                    printf("Nuevo nombre del producto: ");
                    scanf("%s", catalogo[i].nombreProducto);
                    printf("Nombre del producto modificado correctamente.\n");
                    break;
                case 4:
                    printf("Nuevo precio: ");
                    scanf("%f", &catalogo[i].precio);
                    printf("Precio modificado correctamente.\n");
                    break;
                case 5:
                    printf("Nueva cantidad en inventario: ");
                    scanf("%d", &catalogo[i].cantidad);
                    printf("Cantidad en inventario modificada correctamente.\n");
                    break;
                case 6:
                    printf("\nModificación cancelada. Regresando al menú principal.\n");
                    break;
                default:
                    printf("\nOpción inválida. Regresando al menú principal.\n");
                    break;
            }
            return;
        }
    }

    // Producto no encontrado
    printf("\nEl producto no se encuentra en el catálogo.\n");
}