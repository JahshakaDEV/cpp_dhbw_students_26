#include "giro.hpp"
#include "tagesgeld.hpp"
#include "bauspar.hpp"
#include <iostream>

int main()
{
    Giro myGiro1("12342");
    myGiro1.deposit(-1011.1);
    myGiro1.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    Giro myGiro2("12213123342");
    myGiro2.deposit(10);
    myGiro2.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    Tagesgeld myTagesgeld("41422", 100);
    myTagesgeld.deposit(10);
    myTagesgeld.deposit(-100);
    myTagesgeld.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    Tagesgeld myTagesgeld2("41422", 100);
    myTagesgeld2.deposit(100);
    myTagesgeld2.deposit(-100);
    myTagesgeld2.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    Bausparvertrag myBausparvertrag("3242", 0);
    myBausparvertrag.deposit(10);
    myBausparvertrag.deposit(100);
    myBausparvertrag.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    Bausparvertrag myBausparvertrag2("3242", 100);
    myBausparvertrag2.deposit(100);
    myBausparvertrag2.printInfo();
    std::cout << "\n";
    std::cout << "\n";
    BankAccount::printAccountCounts();

    return 0;
}