#include "tagesgeld.hpp"

Tagesgeld::Tagesgeld(const std::string &blz, int mindestlaufzeit)
    : BankAccount(blz), mindestlaufzeit(mindestlaufzeit)
{
    ++BankAccount::countTagesgeld;
}

int Tagesgeld::getMindestlaufzeit() const { return mindestlaufzeit; }

void Tagesgeld::deposit(double amount)
{
    if (amount < 0.0)
    {
        if (getGuthaben() + amount < 0.0)
        {
            std::cout << "Fehler: Tagesgeldkonto darf kein Negativsaldo haben. Vorgang abgelehnt.\n";
            return;
        }
    }
    changeBalance(amount);
}

void Tagesgeld::printInfo() const
{
    std::cout << "Tagesgeld - ";
    BankAccount::printInfo();
    std::cout << "Mindestlaufzeit: " << mindestlaufzeit << "\n";
}