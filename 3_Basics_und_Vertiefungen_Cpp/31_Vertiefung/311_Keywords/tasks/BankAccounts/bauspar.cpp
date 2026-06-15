#include "bauspar.hpp"

Bausparvertrag::Bausparvertrag(const std::string &blz, double bausparsumme)
    : BankAccount(blz), bausparsumme(bausparsumme)
{
    ++BankAccount::countBauspar;
}

double Bausparvertrag::getBausparsumme() const { return bausparsumme; }

void Bausparvertrag::deposit(double amount)
{
    if (amount <= 0.0)
    {
        std::cout << "Fehler: Bausparvertrag erlaubt nur Einzahlungen. Vorgang abgelehnt.\n";
        return;
    }

    double spaceLeft = bausparsumme - getGuthaben();
    if (spaceLeft <= 0.0)
    {
        std::cout << "Hinweis: Bausparsumme bereits erreicht. Einzahlung abgelehnt.\n";
        return;
    }

    if (amount < spaceLeft)
    {
        changeBalance(amount);
        std::cout << "Vollständig eingezahlt: " << amount << ".\n";
        return;
    }

    if (amount > spaceLeft)
    {
        changeBalance(spaceLeft);
        std::cout << "Teilweise eingezahlt: " << spaceLeft
                  << ". Rest " << (amount - spaceLeft) << " abgelehnt.\n";
    }

    changeBalance(spaceLeft);
}

void Bausparvertrag::printInfo() const
{
    std::cout << "Bausparvertrag - ";
    BankAccount::printInfo();
    std::cout << "Bausparsumme: " << bausparsumme << "\n";
}
