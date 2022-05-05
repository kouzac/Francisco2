// 04_05_2022_zap536_adivina_quien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//Practica de adivina quien con tematica de gundam

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int respuesta;

    cout << "Este programa trata de adivinar el modelo de gundam en el que estes pensando." << std::endl;
    cout << "Por favor, responda con un 0 si es un no y 1 si es si." << std::endl;
    Sleep(1000);
    cout << "Tu gundam es blanco en su mayoria? " << std::endl;
    cin >> respuesta;
    if (respuesta == 1) {
        Sleep(1000);
        cout << "El usa alguna clase de rifle?" << std::endl;
        cin >> respuesta;
        if (respuesta == 1) {
            Sleep(1000);
            cout << "Tu gundam usa una espada?" << std::endl;
            cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                cout << "Usa alguna clase de armas psiquicas?" << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "usa algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu Gundam es el Gundam 00" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Nu Gundam" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Usa algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu Gundam es el Star build strike Gundam" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu Gundam es el RX-78-2" << std::endl;
                    }
                }
            }
            else
            {
                Sleep(1000);
                cout << "Tu gundam usa armas psiquicas?" << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Devil Gundam" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Altron Gundam" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Tiene algun modo especial? " << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Wing Zero Gundam" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Gundam unit 4" << std::endl;
                    }
                }
            }
        }
        else
        {
            Sleep(1000);
            cout << "Tu gundam usa espada?" << std::endl;
            cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                cout << "Tu gundam usa armas psiquicas?" << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Gundam throne Zwei" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Mars gundam" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu Gundam es el Gundam Throne Drei" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Astray Red Frame Powered" << std::endl;
                    }
                }
            }
            else
            {
                Sleep(1000);
                cout << "Tu gundam usa armas psiquicas?" << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Gundam Artemi" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Narrative Gundam" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el God Gundam" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Bolt Gundam" << std::endl;
                    }
                }
            }
        }
    }
    else
    {
        Sleep(1000);
        cout << "Tu gundam usa alguna clase de rifle?" << std::endl;
        cin >> respuesta;
        if (respuesta == 1) {
            Sleep(1000);
            cout << "Tu gundam usa espada?" << std::endl;
            cin >> respuesta;
            if (respuesta == 1) {
                Sleep(1000);
                cout << "Tu gundam usa armas psiquicas?" << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "Tiene algun modo especial" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Gundam Astray No Name" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Gadezza" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam es el Black Gundam Sefer Rasiel" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es un Ground type Gundam" << std::endl;
                    }
                }
            }
            else
            {
                Sleep(1000);
                cout << "Tu gundam usa armas psiquicas? " << std::endl;
                cin >> respuesta;
                if (respuesta == 1) {
                    Sleep(1000);
                    cout << "Tiene algun modo especial?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu Gundam es el Gundam the end" << std::endl;
                    }
                    else
                    {
                        Sleep(1000);
                        cout << "Tu gundam es el Tequila Gundam" << std::endl;
                    }
                }
                else
                {
                    Sleep(1000);
                    cout << "Tu gundam usa espada?" << std::endl;
                    cin >> respuesta;
                    if (respuesta == 1) {
                        Sleep(1000);
                        cout << "Tu gundam usa armas psiquicas?" << std::endl;
                        cin >> respuesta;
                        if (respuesta == 1) {
                            Sleep(1000);
                            cout << "Tiene algun modo especial?" << std::endl;
                            cin >> respuesta;
                            if (respuesta == 1) {
                                Sleep(1000);
                                cout << "Tu gundam es el Portent Gundam" << std::endl;
                            }
                            else
                            {
                                Sleep(1000);
                                cout << "Tu gundam es el Crossbone gundam x1" << std::endl;
                            }
                        }
                        else
                        {
                            Sleep(1000);
                            cout << "Tiene algun modo especial?" << std::endl;
                            cin >> respuesta;
                            if (respuesta == 1) {
                                Sleep(1000);
                                cout << "Tu gundam es el Astrea Type F" << std::endl;
                            }
                            else
                            {
                                Sleep(1000);
                                cout << "Tu gundam es el Noir Astray Gundam" << std::endl;
                            }
                        }
                    }
                }
            }
        }
    }
}