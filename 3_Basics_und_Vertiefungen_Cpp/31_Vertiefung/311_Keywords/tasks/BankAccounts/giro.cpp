#include "giro.hpp"

Giro::Giro(const std::string &blz) : BankAccount(blz)
{
    ++BankAccount::countGiro;
}

void Giro::deposit(double amount)
{
    changeBalance(amount);
}

void Giro::printInfo() const
{
    std::cout << "Giro - ";
    BankAccount::printInfo();
}