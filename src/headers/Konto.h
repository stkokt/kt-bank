#pragma once

class Konto{

    public:
    Konto();
    ~Konto();

    double getKontostand();
    void setKontostand(double betrag,bool plusminus);

    private:
    unsigned int kontonummer;
    double kontostand;


};