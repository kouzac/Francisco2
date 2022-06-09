//Francisco Gerardo Robles De Jesús
//Battle royal

#include <iostream>
#include <string>
#include <Windows.h>
#include <random>

struct player
{
    std::string jugador;
    int hp, atk, def, agilidad;
}n[8];

void jugadores()
{
    for (int i = 0; i <= 5; i++)
    {
        std::cout << "Bienvenido al coliseo donde algunos guerreros pelearan por destacar \n";
        std::cout << "Escribe el nombre del guerrero #" << i + 1 << ":\n";
        std::getline(std::cin, n[i].jugador);
    }
}

void stats()
{
    for (int i = 0; i <= 5; i++)
    {
        n[i].hp = rand() % 10;
        n[i].atk = rand() % 10;
        n[i].def = rand() % 10;
        n[i].agilidad = rand() % 10;
        std::cout << "Guerrero #" << i + 1 << ": " << n[i].jugador << " \n";
        std::cout << "  -Su vida es: " << n[i].hp << "\n";
        std::cout << "  -Su ataque es: " << n[i].atk << "\n";
        std::cout << "  -Su defensa es: " << n[i].def << "\n";
        std::cout << "  -Su agilidad es: " << n[i].agilidad << "\n";
        std::cout << "\n";
    }
}

void max_Stats(int maxHP, int maxATK, int maxDEF, int maxAGILIDAD, int wHP, int wATK, int wDEF, int wAGILIDAD, int minHP, int minATK, int minDEF, int minAGILIDAD, int lHP, int lATK, int lDEF, int lAgilidad)
{
    for (size_t i = 0; i < 6; i++)
    {
        if (n[i].hp > maxHP)
        {
            maxHP = n[i].hp;
            wHP = i;
        }
        if (n[i].atk > maxATK)
        {
            maxATK = n[i].atk;
            wATK = i;
        }
        if (n[i].def > maxDEF)
        {
            maxDEF = n[i].def;
            wDEF = i;
        }
        if (n[i].agilidad > maxAGILIDAD)
        {
            maxAGILIDAD = n[i].agilidad;
            wAGILIDAD = i;
        }
    }
    std::cout << "--------------------------------------------------------\n";
    std::cout << "LOS RESULTADOS DE LOS GANADORES SON: \n";
    std::cout << "El jugador con mayor vida es: " << n[wHP].jugador << " con " << n[wHP].hp << " HP " << "Que buen tanque \n";
    std::cout << "El jugador con mayor ataque es: " << n[wATK].jugador << " con " << n[wATK].atk << " ATK " << "Vaya maquina de matar \n";
    std::cout << "El jugador con mayor defensa es: " << n[wDEF].jugador << " con " << n[wDEF].def << " DEF " << "Esponja de ataques \n";
    std::cout << "El jugador con mayor agilidad es: " << n[wAGILIDAD].jugador << " con " << n[wAGILIDAD].agilidad << " AGILIDAD " << "deja de moverte mosquito \n";

    for (size_t i = 0; i < 6; i++)
    {
        if (n[i].hp < minHP)
        {
            minHP = n[i].hp;
            lHP = i;
        }
        if (n[i].atk < minATK)
        {
            minATK = n[i].atk;
            lATK = i;
        }
        if (n[i].def < minDEF)
        {
            minDEF = n[i].def;
            lDEF = i;
        }
        if (n[i].agilidad < minAGILIDAD)
        {
            minAGILIDAD = n[i].agilidad;
            lAgilidad = i;
        }
    }
    std::cout << "---------------------------------------------------------------- \n";
    std::cout << "LOS RESULTADOS DE LOS PERDEDORES SON: \n";
    std::cout << "El jugador con la menor vida es: " << n[lHP].jugador << " con " << n[lHP].hp << " HP " << "empieza a comer mejor :/ \n";
    std::cout << "El jugador con el menor ataque es: " << n[lATK].jugador << " con " << n[lATK].atk << " ATK " << "si sabes que tienes brazos, no? \n";
    std::cout << "El jugador con la menor defensa es: " << n[lDEF].jugador << " con " << n[lDEF].def << " DEF " << "Te matan con solo mirarte \n";
    std::cout << "El jugador con la menor agilidad es: " << n[lAgilidad].jugador << " con " << n[lAgilidad].agilidad << " AGILIDAD " << "Si saber como usar los pies verdad \n";
}

int main()
{
    int maxHP = 0, maxATK = 0, maxDEF = 0, maxAGILIDAD = 0, wHP = 0, wATK = 0, wDEF = 0, wARMOR = 0;
    int minHP = 10, minATK = 10, minDEF = 10, minAGILIDAD = 10, lHP = 0, lATK = 0, lDEF = 0, lArmor = 0;
    srand(time(NULL));
    jugadores();
    system("pause");
    std::cout << "Los guerreros y sus stats son los siguientes: \n\n";
    stats();
    system("pause");
    max_Stats(maxHP, maxATK, maxDEF, maxAGILIDAD, wHP, wATK, wDEF, wARMOR, minHP, minATK, minDEF, minAGILIDAD, lHP, lATK, lDEF, lArmor);
}
