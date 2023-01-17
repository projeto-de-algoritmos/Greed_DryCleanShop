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

    //system("clear");

    // std::cout << "Insira o nome do solicitante: ";
    // std::cin >> nameValue;
    std::cout << "Insira o numero de conjunto de roupas: ";
    std::cin >> sizeValue;
    std::cout << "Insira o prazo do horario para entrega: ";
    std::cin >> timeValue;

    nome[i] = nameValue;
    size[i] = sizeValue*2;
    estimateTime[i] = timeValue;

}

void Greed::init() {
    std::vector<std::pair<int,int>> clothes;
    int delay = 0;
    int day = 0;
    int hours = 8;
    int hoursInterval = 0;
    int realtime = 0;

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

    for(int i=0; i<totalClothes; ++i)
    {
        auto pair = clothIntervals[i];

        delay = std::max(delay, pair.second-clothes[i].second);

        hoursInterval = hours + (pair.second - pair.first);

        if ( hoursInterval >= 17 ) {
            day = day + hoursInterval/17;
            hours = hoursInterval%17 ;
            realtime = 8 + hours;
        }else  {hours = hoursInterval; realtime = hours;};

        std::cout << "Dia: " << day << " Hora: " << realtime;

        //std::cout << "(" << pair.first << "," << pair.second << ") ";

        std::cout << " ";

        if(pair.second-clothes[i].second >= 0 ) {
            if(day == 0){
                std::cout << "Atraso: " << pair.second-clothes[i].second
                        << " horas" << "\n";
            }
            else {
                if( day == 1) {
                    std::cout << "Atraso: " << day
                            << " dia e "<< pair.second-clothes[i].second
                            << " horas" << "\n";
                }
                else {
                std::cout << "Atraso: " << day
                        << " dias e "<< pair.second-clothes[i].second
                        << " horas" << "\n";
                }
            }
        } else {
            if(day == 0){
                std::cout << "Adiantado: " << (pair.second-clothes[i].second)*-1
                        << " horas" << "\n";
            }
            else {
                if( day == 1) {
                    std::cout << "Adiantado: "
                            << (pair.second-clothes[i].second)*-1
                            << " horas" << "\n";
                }
                else {
                std::cout << "Adiantado: "
                        << (pair.second-clothes[i].second)*-1
                        << " horas" << "\n";
                }
            }
        }
    }

    if (delay == 0) {
        std::cout << "\nNão ouve atrasos" << '\n';
    } else std::cout << "\nAtraso máximo é de horas " << delay << '\n';
}

