// ============================================================================
//  Aufgabe: Supermarkt-Kassensystem
//    - Katalog (Produktname -> Preis) in einer std::map
//    - Einkaufsliste des Kunden (von der Kommandozeile) in einem std::vector
//    - Kassenzettel aus Vector + Map ausgeben
//
//  Kompilieren:  g++ -std=c++17 -Wall -Wextra kassensystem.cpp -o kasse
//  Starten:      ./kasse
//
//  Hinweis: Statt std::map ginge auch std::unordered_map (schnellerer Zugriff,
//  dafuer keine sortierte Reihenfolge). Die Nutzung ist identisch.
// ============================================================================

#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <vector>

// (1)+(2) Katalog anlegen und mit Produktnamen + Preisen befuellen
// TODO
std::map<std::string, double> erstelleKatalog() {
    std::map<std::string, double> catalog;
    catalog["Apfel"] = 0.99;
    catalog["Banane"] = 1.49;
    catalog["Fleisch"] = 7.99;
    return catalog;
};

// Hilfsfunktion: verfuegbares Sortiment anzeigen
void zeigeSortiment(const std::map<std::string, double>& katalog) {
    std::cout << "Verfuegbare Produkte:\n";
    for (const auto& [name, preis] : katalog) {
        std::cout << "  - " << std::left << std::setw(10) << name
                  << std::right << std::setw(6) << std::fixed << std::setprecision(2)
                  << preis << " EUR\n";
    }
    std::cout << std::endl;
}

// (3)+(4) Einkaufsliste von der Kommandozeile lesen und im Vector speichern
// TODO
std::vector<std::string> createShoppingList() {
    std::vector<std::string> shoppingList;
    std::string input;
    while (true) {
        std::cout << "Produkt (oder 'ende' zum Beenden): ";
        std::getline(std::cin, input);
        if (input == "ende") break;
        shoppingList.push_back(input);
    }
    return shoppingList;
}

// (5) Kassenzettel aus Vector + Map ausgeben

void druckeKassenzettel(const std::vector<std::string>& einkauf,
                        const std::map<std::string, double>& katalog) {
    std::cout << "\n=============== Kassenzettel ===============\n";
    double summe = 0.0;

    for (const std::string& produkt : einkauf) {
        auto it = katalog.find(produkt);
        if (it != katalog.end()) {
            double preis = it->second;
            std::cout << "  - " << std::left << std::setw(10) << produkt
                      << std::right << std::setw(6) << std::fixed << std::setprecision(2)
                      << preis << " EUR\n";
            summe += preis;
        } else {
            std::cout << "  - " << produkt << " (nicht gefunden)\n";
        }
    }
    std::cout << "------------------------------------------\n";
    std::cout << "Gesamtsumme: " << std::fixed << std::setprecision(2) << summe << " EUR\n";
}

int main() {
    std::map<std::string, double> katalog = erstelleKatalog();

    zeigeSortiment(katalog);
    std::vector<std::string> einkaufsListe = createShoppingList();
    druckeKassenzettel(einkaufsListe, katalog);

    return 0;
}