#include "../inc/Greed.h"

Greed::Greed() {
    for (int i = 0; i<MAX; i++) {
        size[i] = 0;
        estimateTime[i] = 0;
        nome[i] = "";
    }

    totalClothes = 0;
}

Greed::~Greed() {

}

void Greed::insertClothes() {
    int i{0};
    int sizeValue{};
    int timeValue{};
    std::string nameValue;

    for(i=0; i<MAX; i++) {
        if(size[i] == 0) break;
    }

    // std::cout << "Insira o nome do solicitante: ";
    // std::cin >> nameValue;
    std::cout << "Insira o kg de roupas: ";
    std::cin >> sizeValue;
    std::cout << "Insira o prazo do horario para entrega: ";
    std::cin >> timeValue;

    nome[i] = nameValue;
    size[i] = sizeValue*2;
    estimateTime[i] = timeValue;

}

void Greed::init() {
    std::vector<std::pair<int,int>> clothes;

    for(int j=0; j<MAX; j++) if(size[j] != 0) totalClothes++;

    for(int i=0; i<totalClothes; i++) {
        clothes.push_back(std::make_pair(size[i], estimateTime[i]));
    }

    std::sort(clothes.begin(), clothes.end(),
        [](std::pair<int,int> p1, std::pair<int,int> p2)
        { return p1.second < p2.second; }
    );

    std::vector<int> A;

    int t = 0;

    std::vector<std::pair<int,int>> clothIntervals;

    for(int i=0; i<totalClothes; ++i)
    {
        clothIntervals.push_back(std::make_pair(t,t+clothes[i].first));
        t += clothes[i].first;
    }

    int delay = 0;

    for(int i=0; i<totalClothes; ++i)
    {
        auto pair = clothIntervals[i];

        delay = std::max(delay, pair.second-clothes[i].second);

        std::cout << "(" << pair.first/2 << "," << pair.second << ") "
             << "Atraso: " << pair.second-clothes[i].second << std::endl;
    }

    std::cout << "\nAtraso máximo é de " << delay << std::endl;
}
