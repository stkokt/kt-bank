#pragma once
#include<vector>
#include<iostream>
#include"Konto.h"
#include"Kreditkarte.h"
#include "Bankkunde.h"


class Bank{

    public:
    Bank();
    ~Bank();
    static const int* cntCust;
    std::vector<std::tuple<Bankkunde*,Konto*, Karte*>> Kunden;

    Bankkunde* addKunde(std::string name);

    static bool proof(Konto* k);

    private:
    

};



