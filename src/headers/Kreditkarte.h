/* #ifndef KARTE_H
#define KARTE_H */
#pragma once
#include"Bankkunde.h"


class Kreditkarte{
    public:
        static std::vector<unsigned long long> kreditkartenNummern;

        Kreditkarte();
        // ~Kreditkarte();
        Kreditkarte();
        // ~Kreditkarte();

        void generateKartenNr();
        unsigned long long vecToInt(std::vector<int>);
        int generatePZ(std::vector<int>);
        bool checkKarte();
        bool checkUnique(unsigned long long, std::vector<unsigend long long>);
        void printKartenNr();

    private:
        std::vector<int> kreditkartenNr;
};
