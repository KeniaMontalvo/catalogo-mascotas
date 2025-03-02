#include <iostream>

float a,b,c,d,e, promedio;

int main()
{
    std::cout<<"Calcula el promedio de 5 calificaciones";

    std::cout<< "\nIngresa el primer valor: ";
    std::cin>>a;
    std::cout<< "Ingresa el segundo valor: ";
    std::cin>>b;
    std::cout<< "Ingresa el tercer valor: ";
    std::cin>>c;
    std::cout<< "Ingresa el cuarto valor: ";
    std::cin>>d;
    std::cout<< "Ingresa el quinto valor: ";
    std::cin>>e;
    
    //Calcular el promedio
    promedio = (a + b + c + d + e) / 5;
    
    //Resultado
    std::cout<< "\nPromedio de las 5 calificaciones, es: " <<promedio<<std::endl;
    
    //Validación del promedio
    if(promedio <= 6.9){
        std::cout<< "Reprobado"<<std::endl;
    } else {
        std::cout<< "Aprobado"<<std::endl;
    }
    return 0;
}