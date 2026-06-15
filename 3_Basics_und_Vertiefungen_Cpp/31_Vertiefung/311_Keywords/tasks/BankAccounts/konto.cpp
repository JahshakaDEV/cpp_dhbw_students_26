#include "konto.hpp"
#include <random>

int BankAccount::countGiro = 0;
int BankAccount::countTagesgeld = 0;
int BankAccount::countBauspar = 0;

// Generate a 6-digit konto number between 100000 and 999999
std::string BankAccount::generateKontoNummer()
{
    static std::random_device rd;
    static std::mt19937 mt(rd());
    static std::uniform_int_distribution<int> dist(100000, 999999);
    return std::to_string(dist(mt));
}

BankAccount::BankAccount(const std::string &blz)
    : kontoNummer(generateKontoNummer()), BLZ(blz), guthaben(0.0)
{
}

BankAccount::~BankAccount() = default;

std::string BankAccount::getKontoNummer() const { return kontoNummer; }
std::string BankAccount::getBLZ() const { return BLZ; }
double BankAccount::getGuthaben() const { return guthaben; }

void BankAccount::changeBalance(double amount)
{
    guthaben += amount;
}

void BankAccount::printInfo() const
{
    std::cout << "KontoNr: " << kontoNummer << " | BLZ: " << BLZ
              << " | Guthaben: " << guthaben << '\n';
}

void BankAccount::printAccountCounts()
{
    std::cout << "Anzahl Girokonten: " << countGiro << " | "
              << "Anzahl Tagesgeldkonten: " << countTagesgeld << " | "
              << "Anzahl Bausparvertraege: " << countBauspar << '\n';
}