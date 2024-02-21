#include "Kreditkarte.h"

#include "Bank.h"

Karte::Karte(){

};
Karte::~Karte(){

};

bool Karte::getStatus() {
  if (!this) {
    return false;
  }
  return this->status;
};

void Karte::setStatus(Bankkunde* bk) {
  if (Bank::proof(bk->getKonto())) {
    this->status = true;
  }
};
