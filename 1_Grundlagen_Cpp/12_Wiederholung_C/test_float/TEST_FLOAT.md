# Float-Präzisionsverlust (Floating Point Precision Loss)

## Programm

```cpp
for (float x = 0.0; x != x + 1; x += 100)
{
    std::cout << x << std::endl;
}
```

Der Loop läuft, solange `x != x + 1` gilt – also solange das Addieren von `1` den Wert von `x` noch verändert.

## IEEE 754 Single Precision (32 Bit)

```
[ 1 Bit Vorzeichen | 8 Bit Exponent | 23 Bit Mantisse ]
```

### Berechnung des Wertes

Der tatsächliche Wert ergibt sich aus:

$$x = (-1)^{V} \times 1{,}M \times 2^{E - 127}$$

| Symbol | Bedeutung |
|--------|-----------|
| $V$    | Vorzeichenbit (0 = positiv, 1 = negativ) |
| $M$    | 23-Bit Mantisse (die Nachkommastellen von $1{,}M$) |
| $E$    | 8-Bit Exponent, **biased** um 127 (gespeicherter Wert − 127 = tatsächlicher Exponent) |

**Beispiel:** $x = 6{,}5$

$$6{,}5 = 1{,}101_2 \times 2^2 = 1{,}625 \times 4 \quad\Rightarrow\quad V=0,\; E=129\;(=127+2),\; M=101\underbrace{00\ldots0}_{20\text{ Bit}}$$

Je größer der Exponent, desto größer der Abstand zwischen zwei benachbarten Fließkommazahlen – die absolute Genauigkeit **nimmt ab**.

## Effekt: Präzisionsverlust bei großen Zahlen

Ein `float` ist 32 Bit groß (**IEEE 754 Single Precision**) und hat eine Mantisse von 23 Bit (+ 1 implizites Bit = 24 Bit Genauigkeit).

Damit kann `float` ganzzahlig exakt darstellen bis:

$$2^{24} = 16{.}777{.}216$$

Jenseits dieses Wertes ist der Abstand zwischen zwei benachbarten `float`-Werten (das sog. **ULP – Unit in the Last Place**) bereits ≥ 2. Das bedeutet: `1.0f` ist kleiner als die kleinste darstellbare Differenz – das Addieren von `1` ändert den Wert **nicht mehr**.

$$x + 1 = x \quad \text{wenn } x \geq 2^{24}$$

Die Schleifenbedingung `x != x + 1` wird **false** und der Loop endet.

## Ausgabe (Ende des Loops)

```
...
16777100
16777200       ← letzter Schritt vor 2^24
               ← Loop endet, da 16777200.0f + 1 == 16777200.0f
```

> **Kein Überlauf** – der Loop endet hier durch **Präzisionsverlust**, nicht durch einen Überlauf wie beim `int`-Beispiel.

## Vergleich: float vs. int

| Eigenschaft        | `int` (32 Bit)                   | `float` (32 Bit)                      |
|--------------------|----------------------------------|---------------------------------------|
| Darstellung        | Zweierkomplement                 | IEEE 754 (Vorzeichen, Exponent, Mantisse) |
| Maximaler Wert     | $2^{31}-1 \approx 2{,}1 \cdot 10^9$ | $\approx 3{,}4 \cdot 10^{38}$         |
| Ganzzahl-Präzision | exakt bis $2^{31}-1$             | exakt nur bis $2^{24} = 16{.}777{.}216$ |
| Loop-Ende durch    | Überlauf (Wrap-Around)           | Präzisionsverlust (`x+1 == x`)        |


