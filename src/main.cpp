#include <iostream>

#include "Bank.h"

// #include"Kreditkarte.cpp"

// using namespace std;

// test

int main() {
  Bank bank;
  Bankkunde* Erwin = bank.addKunde("Erwin");
  Bankkunde* Hans = bank.addKunde("Hans");
  bank.Kunden[0]->einzahlen(100);
  std::cout << "Kunde " << bank.Kunden[0]->name << " hat " << bank.Kunden[0]->getKonto()->getKontostand() << "€ auf seinem Konto." << std::endl;
  std::cout << Erwin->kundenID << std::endl;
  Erwin->beantragenKarte();
  std::cout << "Kunde " << bank.Kunden[0]->beantragenKarte() << bank.Kunden[0]->getKarte()->getStatus() << std::endl;

  // std::get<0>(bank.Kunden.at(1))->einzahlen(100);
  Hans->beantragenKarte();
  std::cout << "Kunde " << bank.Kunden[1]->beantragenKarte() << bank.Kunden[1]->getKarte()->getStatus() << std::endl;

  return 0;
}
