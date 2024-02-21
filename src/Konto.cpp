#include "Konto.h"

Konto::Konto(){

};

Konto::~Konto() {}

/**
 * @brief
 *
 * @param betrag
 * @param plusminus : true für einzahlen, false für auszahlen
 */
void Konto::setKontostand(double betrag, bool plusminus) {
  if (plusminus) {
    this->kontostand += betrag;
  } else {
    this->kontostand -= betrag;
  }
};
double Konto::getKontostand() {
  return this->kontostand;
};
