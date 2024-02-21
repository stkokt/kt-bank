/* #ifndef KARTE_H
#define KARTE_H */
#pragma once
#include"Bankkunde.h"


class Karte{

    public:
    Karte();
    ~Karte();

    bool getStatus();
    void setStatus(Bankkunde* bk);

    private:
    bool status = false;

};

//#endif