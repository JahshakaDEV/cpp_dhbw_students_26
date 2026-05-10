# Aufgabe: Klasse Rectangle

## Beschreibung

In dieser Aufgabe soll eine Klasse `Rectangle` in C++ implementiert werden, die grundlegende Konzepte der objektorientierten Programmierung wie Datenkapselung, Konstruktoren und Methoden demonstriert.

Die Klasse soll folgende Eigenschaften und Funktionen besitzen:

- Eine **Länge** (`length`) und eine **Breite** (`width`) als private Member-Variablen
- Einen **Konstruktor**, mit dem Länge und Breite beim Erstellen eines Objekts gesetzt werden können
- Eine **Methode zum Verändern** von Länge und Breite
- Eine **Methode zur Berechnung und Ausgabe des Flächeninhalts**

### Zusatzaufgabe

Erstellen Sie analog eine weitere Klasse `Triangle` mit einer Basis (`base`) und einer Höhe (`height`), die ebenfalls den Flächeninhalt berechnen und ausgeben kann.

$$A_{Dreieck} = \frac{base \times height}{2}$$

## Bereitgestellte Funktionsprototypen

Keine.

## Beispielablauf

### Rectangle

```cpp
Rectangle r(5, 3);
r.printArea();          // Erwartete Ausgabe: Area: 15

r.setDimensions(10, 4);
r.printArea();          // Erwartete Ausgabe: Area: 40
```

### Zusatzaufgabe: Triangle

```cpp
Triangle t(6, 4);
t.printArea();          // Erwartete Ausgabe: Area: 12
```

## Bewertungskriterien

- **Funktionalität**: Kann das Programm fehlerfrei gebaut und ausgeführt werden?
- **Datenkapselung**: Sind `m_length` und `m_width` korrekt gekapselt?
- **Konstruktor**: Werden Länge und Breite korrekt über einen Konstruktor initialisiert?
- **Code-Qualität**: Ist der Code sauber, verständlich und entspricht den Coding Conventions?
