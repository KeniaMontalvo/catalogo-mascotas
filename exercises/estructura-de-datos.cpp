#include <iostream> //Librería de entrada y salida de datos
#include <string> //Librería para aceptar caracteres

//Declaración de la estructura para los datos del estudiante
struct estudiantes {
    int matricula;
    char nombre[15];
    char carrera[15];
    float promedio;
    char direccion[25];
};

int main() {
    //Encabezado del programa
    printf("Programa que muestra los datos de estudiantes\n");
    
    //Declarar el número de empleados
    estudiantes estudiante[2]; //Número de empleados a solicitar
    for(int e=0;e<2;e++){ //Iteraciones para solicitar datos
        //Solicitar datos
        printf("\nEscribe la matrícula %d: ", e+1); //Pedir matrícula
        scanf("%d", &estudiante[e].matricula); //Leer el dato y almacenarlo en la estructura
        
        printf("\nEscribe el nombre: "); //Pedir nombre
        scanf("%s", estudiante[e].nombre); //Leer el dato y almacenarlo en la estructura
        
        printf("\nEscribe la carrera: "); //Pedir carrera
        scanf("%s", estudiante[e].carrera); //Leer el dato y almacenarlo en la estructura
        
        printf("\nEscribe el promedio: "); //Pedir promedio
        scanf("%f", &estudiante[e].promedio); //Leer el dato y almacenarlo en la estructura
        
        printf("\nEscribe la dirección: "); //Pedir dirección
        scanf("%s", estudiante[e].direccion); //Leer el dato y almacenarlo en la estructura
        
        printf("\n"); //Salto de línea
    }

    //Mostrar los datos del estudiante
    printf("*********** Escuela UVM **********\n");//Encabezado
    printf("Los datos de los estudiantes que se introdujeron son: \n\n");
    
    for(int e=0;e<2;e++){
        printf("\t %d", estudiante[e].matricula);
        printf("\t %s", estudiante[e].nombre);
        printf("\t %s", estudiante[e].carrera);
        printf("\t %f", estudiante[e].promedio);
        printf("\t %s\n\n", estudiante[e].direccion);
    }

    return 0;
}