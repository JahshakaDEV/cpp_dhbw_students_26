#ifndef TAGESGELD_HPP
#define TAGESGELD_HPP

#include "konto.hpp"

class Tagesgeld : public BankAccount
{
public:
    Tagesgeld(const std::string &blz, int mindestlaufzeit);
    int getMindestlaufzeit() const;
    void deposit(double amount) override;
    void printInfo() const override;

private:
    const int mindestlaufzeit;
};

#endif