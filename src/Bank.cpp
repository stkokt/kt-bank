#include "Bank.h"
#include <iostream>
#include <tuple>

Bank::Bank() {}

Bank::~Bank() {}

Bankkunde* Bank::addKunde(std::string name) {
  Konto* k = new Konto();
  Bankkunde* bk = new Bankkunde(name, k);
  Karte* kk = new Karte();
  this->Kunden.push_back(std::make_tuple(bk, k, kk));
  return bk;
}

bool Bank::proof(Konto* k) {
  return (k->getKontostand() >= 100) ? true : false;
};
