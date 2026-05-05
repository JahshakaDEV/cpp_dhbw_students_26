# Integer-Überlauf (Integer Overflow)

## Programm

```cpp
for (int n = 0; n >= 0; n += 100000)
{
    std::cout << n << std::endl;
}
```

Der Loop scheint auf den ersten Blick **unendlich** zu laufen, da `n` bei 0 startet und immer größer wird – die Bedingung `n >= 0` wäre damit nie falsch.

## Effekt: Integer-Überlauf

Ein `int` ist 32 Bit groß und verwendet das **Zweierkomplement**. Damit gilt:

$$n_{\max} = 2^{31} - 1 = 2{.}147{.}483{.}647$$

Sobald `n` diesen Wert überschreitet, „rollt" es auf den kleinsten negativen Wert um:

$$2{.}147{.}483{.}647 + 1 \;\rightarrow\; -2{.}147{.}483{.}648$$

Die Schleifenbedingung `n >= 0` wird **falsch** und der Loop endet.

## Ausgabe (Ende des Loops)

```
...
2147300000 
2147400000 # Überlauf beim nächsten Schritt
```

> **Hinweis:** Integer-Überlauf bei `signed int` ist in C++ **undefined behavior** (UB).  
> Das Programm kann daher je nach Compiler und Optimierungsstufe unterschiedlich reagieren.

