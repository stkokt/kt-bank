#include <iostream>

#include "Bank.h"

// #include"Kreditkarte.cpp"

// using namespace std;

// hallo
int main() {
  Bank bank;
  Bankkunde* Erwin = bank.addKunde("Erwin");
  Bankkunde* Hans = bank.addKunde("Hans");
  std::get<0>(bank.Kunden.at(0))->einzahlen(100);
  std::cout << "Kunde " << std::get<0>(bank.Kunden.at(0))->name << " hat " << std::get<0>(bank.Kunden.at(0))->abfrage() << "€ auf seinem Konto." << std::endl;
  std::cout << Erwin->kundenID << std::endl;
  Erwin->beantragenKarte();
  std::cout << "Kunde " << std::get<0>(bank.Kunden.at(0))->beantragenKarte() << std::get<0>(bank.Kunden.at(0))->getKarte()->getStatus() << std::endl;

  // std::get<0>(bank.Kunden.at(1))->einzahlen(100);
  Hans->beantragenKarte();
  std::cout << "Kunde " << std::get<0>(bank.Kunden.at(1))->beantragenKarte() << std::get<0>(bank.Kunden.at(1))->getKarte()->getStatus() << std::endl;

  return 0;
}
