#include "Bankkunde.h"
#include "Konto.h"
#include "Kreditkarte.h"

#include <iostream>

Bankkunde::Bankkunde(std::string name, Konto* konto) {
  this->name = name;
  this->konto = konto;
  this->karte = nullptr;
}

Bankkunde::~Bankkunde() {
  this->konto = nullptr;
  this->karte = nullptr;
}

double Bankkunde::abfrage() {
  return this->konto->getKontostand();
}

void Bankkunde::einzahlen(double betrag) {
  konto->setKontostand(betrag, true);
};
void Bankkunde::auszahlen(double betrag) {
  konto->setKontostand(betrag, false);
};

bool Bankkunde::beantragenKarte() {
  Karte* k = new Karte();
  k->setStatus(this);
  if (k->getStatus()) {
    this->karte = k;  // kunde kriegt karte
    return true;
  }
  delete k;  // karte wird geloescht falls kunde kein geld hat
  return false;
};

Konto* Bankkunde::getKonto() {
  return this->konto;
};

Karte* Bankkunde::getKarte() {
  return this->karte;
};
