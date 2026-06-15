#ifndef GIRO_HPP
#define GIRO_HPP

#include "konto.hpp"

class Giro : public BankAccount
{
public:
    Giro(const std::string &blz);
    void deposit(double amount) override;
    void printInfo() const override;
};

#endif