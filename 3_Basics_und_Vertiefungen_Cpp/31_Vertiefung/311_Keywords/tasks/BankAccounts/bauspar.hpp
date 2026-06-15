#ifndef BAUSPAR_HPP
#define BAUSPAR_HPP

#include "konto.hpp"

class Bausparvertrag : public BankAccount
{
public:
    Bausparvertrag(const std::string &blz, double bausparsumme);
    double getBausparsumme() const;
    void deposit(double amount) override;
    void printInfo() const override;

private:
    const double bausparsumme;
};

#endif