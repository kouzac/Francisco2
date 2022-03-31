// 22_03_31_zap536_condición_multiple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//haremos una calculadora sencilla + - * /

#include <iostream>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    
    std::cout << "ingrese un numero\n";
    std::cin >> numero1;
    std::cout << "ingrese otro numero profavor \n";
    std::cin >> numero2;
    int opcion;
    std::cout << "seleccione una opcion \n";
    std::cout << "para escoger suma use el 0 \npara una resta use 1 \npara una multiplicacion use 2 \npara una division use 3 \n";
    int resultadoSuma = numero1 + numero2;
    int resultadoResta = numero1 - numero2;
    int resultadoMultiplicacion = numero1 * numero2;
    int resultadoDivision = numero1 / numero2;
    std::cin >> opcion;
    //sintaxis de switch
    switch (opcion)
    { 
        case 0:
           std::cout << resultadoSuma;
            break;
        case 1:
            std::cout << resultadoResta;
            break;
        case 2:
            std::cout << resultadoMultiplicacion;
            break;
        case 3:
            std::cout << resultadoDivision;
        default:
            std::cout << "Insgresaste un termino que no tengo contemplado :( \n";
    }
}

