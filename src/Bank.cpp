#include "Bank.h"
#include <iostream>
#include <optional>

Bank::Bank() {
  this->kundenID_gen = 0;

  // leere vector initialisierung
  this->kunden = std::vector<Bankkunde>();
  this->automaten = std::vector<Bankautomat>();
}

Bank::~Bank() {
  std::cout << "Bank zerstoert." << std::endl;
}

Bank Bank::instance() {
  static Bank tempBank = Bank();
  return tempBank;
}

void Bank::kundeAnlegen(std::string vorname, std::string nachname) {
  Bankkunde tempkunde = Bankkunde(vorname, nachname);
  kunden.push_back(tempkunde);
}

void Bank::kundeLoeschen(unsigned int kundenID) {
  // durch den kunden vector loopen
  for (int i = 0; i < kunden.size(); i++) {
    if (kunden.at(i).kundenID == kundenID) {
      // wenn kundenID uebereinstimmt, loesche das element. (komisches iterator zeug muss hier gemacht werden?)
      this->kunden.erase(this->kunden.begin() + i);
      return;
    }
  }

  std::cout << "kundenID " << kundenID << " nicht gefunden.";
}

void Bank::automatAnlegen(unsigned int automatID) {
  Bankautomat tempautomat = Bankautomat(automatID);
  this->automaten.push_back(tempautomat);
}

void Bank::automatLoeschen(unsigned int automatID) {
  for (int i = 0; i < this->automaten.size(); i++) {
    if (this->automaten.at(i).automatID == automatID) {
      // wenn automatID uebereinstimmt, loesche das element. (komisches iterator zeug muss hier gemacht werden?)
      this->automaten.erase(this->automaten.begin() + i);
      return;
    }
  }

  std::cout << "automatID " << automatID << " nicht gefunden.";
}

// die returntypes von den gettern sind up for debate.
/*
 * szenario:    kundenID wird nicht gefunden.
 * frage:       wie soll man dem caller wissen lassen, dass kein kunde gefunden wurde?
 * antworten:   std::optional<T>, int return mit T* als parameter, exception werfen, leeren bankkunden returnen (wie es unten auch
 *              erstmals implementiert wurde)
 */
Bankkunde Bank::getKunde(unsigned int kundenID) {
  for (int i = 0; i < this->kunden.size(); i++) {
    if (this->kunden.at(i).kundenID == kundenID) {
      return this->kunden.at(i);
    }
  }
}

// std::optional implementation
/*
 * caller usage:
 *      optional<Bankkunde> gesuchter_kunde = getKunde(45);
 *      if(gesuchter_kunde.has_value()) {
 *          gesuchter_kunde.setKontostand(12);
 *      }
 *
 */
std::optional<Bankkunde> Bank::getKunde(unsigned int kundenID) {
  for (int i = 0; i < this->kunden.size(); i++) {
    if (this->kunden.at(i).kundenID == kundenID) {
      return this->kunden.at(i);
    }
  }
  return {};
}

int Bank::getKunde(unsigned int kundenID, Bankkunde* p_kunde) {}

Bankkunde Bank::getKunde(int index) {}
Bankautomat Bank::getAutomat(unsigned int automatID) {}
Bankautomat Bank::getAutomat(int index) {}
