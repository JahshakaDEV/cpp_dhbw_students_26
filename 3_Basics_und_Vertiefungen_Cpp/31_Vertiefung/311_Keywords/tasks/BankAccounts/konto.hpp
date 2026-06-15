#ifndef KONTO_HPP
#define KONTO_HPP

#include <string>
#include <iostream>

class BankAccount
{
public:
    BankAccount(const std::string &blz);
    virtual ~BankAccount();

    std::string getKontoNummer() const;
    std::string getBLZ() const;
    double getGuthaben() const;

    virtual void deposit(double amount) = 0;

    virtual void printInfo() const;

    static void printAccountCounts();

protected:
    void changeBalance(double amount);

    static int countGiro;
    static int countTagesgeld;
    static int countBauspar;

private:
    std::string kontoNummer;
    const std::string BLZ;
    double guthaben;

    static std::string generateKontoNummer();
};

#endif // KONTO_HPP