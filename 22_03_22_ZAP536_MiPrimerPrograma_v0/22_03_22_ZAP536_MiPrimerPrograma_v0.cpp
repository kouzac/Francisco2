// 22_03_22_ZAP536_MiPrimerPrograma_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// este es mi primer programa :v Francisco Gerardo Robles De Jesús

#include <iostream>

int main()
{
    std::cout << "Snake what happen? SNAKE!!? SNAKEEEE!\n"<< std::endl;
    //Declarar variables
    int mi_primer_entero = 0;
    int mi_segundo_entero;
    int resultado_de_la_suma;
    std::cout << "ingresa un numero: " << std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "ingresa un segundo numero: " << std::endl;
    std::cin >> mi_segundo_entero;

    resultado_de_la_suma = mi_primer_entero + mi_segundo_entero;
    std::cout << "El resultado de la suma es: " << resultado_de_la_suma << std::endl;
    
    float miPrimerFloat = 0;

    std::cout << "ingresa un numero con decimal" << std::endl;
    std::cin >> miPrimerFloat;
    std::cout << "Su numero decimal es: " << miPrimerFloat << std::endl;

    char miPrimerChar = 0;
    std::cout << "ingrese una letra" << std::endl;
    std::cin >> miPrimerChar;
    std::cout << "su carcater es: " << miPrimerChar << std::endl;

    double miPrimerDouble = 0;
    std::cout << "ingrese un numero grande" << std::endl;
    std::cin >> miPrimerDouble;
    std::cout << "su numero es: " << miPrimerDouble << std::endl;

    std::string miPrimerstring;
    std::cout << "ingrese una palabra" << std::endl;
    std::cin >> miPrimerstring;
    std::cout << "su palabra es: " << miPrimerstring <<std::endl;

    //otro forma de registrar datos
    printf("ingrese un numero \n");
    scanf_s("%d", mi_primer_entero);
    printf("su numero es: %d \n", mi_primer_entero);

    printf("ingrese un numero con decimal \n");
    scanf_s("%f", miPrimerFloat);
    printf("su numero es: %f \n", miPrimerFloat);

    printf("ingrese un numero grande \n");
    scanf_s("%lf", miPrimerDouble);
    printf("su numero es: %lf \n", miPrimerDouble);

    char d;
    printf("ingrese un character \n");
    getchar();
    scanf_s("%c", &d, 1);
    printf("su caracter es: %c \n", d);
}
