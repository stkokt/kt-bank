#pragma once
#include <iostream>
#include <vector>
#include "Bankkunde.h"
#include "Konto.h"
#include "Kreditkarte.h"

class Bank {
 public:
  Bank();
  ~Bank();
  static const int* cntCust;
  std::vector<Bankkunde*> Kunden;

  Bankkunde* addKunde(std::string name);

  static bool proof(Konto* k);

 private:
};
