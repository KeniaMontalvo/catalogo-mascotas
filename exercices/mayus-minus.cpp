//Convertir una frase que añada el usuario en mayúsculas o minúsculas

#include <iostream>
#include <string>

int main()
{
    //Declarar la cadena de caracteres
    char cadena [100];

    std::cout << "Ingrese la frase que desea convertir: \n";
    std::cin.getline(cadena,100);
    
    //Imprimir la cadena original
    printf("Cadena original: %s \n\n", cadena);
    
    //Convertir el texto a mayúsculas
    for (int i=0; cadena[i]!= '\0';i++){
        cadena[i]=toupper(cadena[i]);
    }
    
    //Imprimir la cadena en mayúsculas
    printf("Cadena convertida a mayúsculas:\n");
    printf("%s\n\n",cadena);
    
    //Convertir el texto a minúsculas
    for (int i=0; cadena[i]!= '\0';i++){
        cadena[i]=tolower(cadena[i]);
    }
    
    //Imprimir la cadena en minúsculas
    printf("Cadena convertida a minúsculas:\n");
    printf("%s\n\n",cadena);
    return 0;
}