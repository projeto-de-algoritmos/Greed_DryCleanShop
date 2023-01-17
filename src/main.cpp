#include <iostream>
#include "../inc/Greed.h"

int main()
{
    Greed roupas;

    int menu{};

    system("clear");

    while (true) {

        std::cout << "Escolha uma opção: " << '\n';
        std::cout << "1. Inserir conjunto de roupas" << '\n';
        std::cout << "2. Listar pedidos " << '\n';
        std::cout << "3. Gerar otimização" << '\n';

        std::cout << "0. Sair" << '\n';

        std::cin >> menu;

        system("clear");

        switch (menu) {
            case 1 :
                roupas.insertClothes();
                break;
            case 2 :
                roupas.listClothes();
                std::cin.ignore();
                break;
            case 3 :
                roupas.init();
                std::cin.ignore();

                break;
            case 0 :

                return 0;

            default:
                std::cout << "Escolha invalida!" << '\n';
                break;
        }
    }


    return 0;
}

