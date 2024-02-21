#pragma once
#include<iostream>
#include "Konto.h"
//#include "Kreditkarte.h" //zirkuläre Abhängigkeit aufgelöst siehe Zeile 7


class Karte; //Vorwärtsdeklaration

class Bankkunde{

    public:
    Bankkunde(std::string name, Konto* k);
    ~Bankkunde();

    // Member- Variablen
    unsigned int kundenID=0;
    std::string name;

    // Member- Funktionen

    double abfrage();
    void einzahlen(double betrag);
    void auszahlen(double betrag);
    bool beantragenKarte();
    Konto* getKonto();
    Karte* getKarte();


    private:

    Konto* konto;
    Karte* karte;






};

