#pragma once
#include <iostream>
#include <vector>
#include "Bankkunde.h"
#include "Konto.h"
#include "Kreditkarte.h"

class Bank {
 private:
  unsigned int kundenID_gen;
  std::vector<Bankkunde> kunden;
  std::vector<Bankautomat> automaten;
  Bank();

 public:
  static Bank instance();
  ~Bank();
  void kundeAnlegen(std::string vorname, std::string nachname);
  void kundeLoeschen(unsigned int kundenID);
  void automatAnlegen(unsigned int automatenID);
  void automatLoeschen(unsigned int automatenID);
  Bankkunde getKunde(unsigned int kundenID);
  Bankkunde getKunde(int index);
  Bankautomat getAutomat(unsigned int automatID);
  Bankautomat getAutomat(int index);
};
