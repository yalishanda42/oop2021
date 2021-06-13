# The Big 4 Cheatsheet

## Кога?

Когато в класа пазим пойнтъри, които сочат към динамично заделена памет.

## Как?

```
Клас {
private:
    T* пойнтърче

public:
    ДефолтенКонструктор {
        // Тука инициализираме пойнтъра с подходяща стойност - по принцип такава е nullptr.
        // За char* масив такава стойност е "" (a.k.a '\0') затова преди да я присовим му заделяме памет колкото за един char.
        // Ако пък имаме вектор от пойнтъри, сочещи към динамична памет, тук не правим нищо.
    }

    КопиКонструктор {
        Заделяме нови точни копия на всички динамични обекти от другия клас и си ги запазваме.
        // (така се справяме със споделената памет)
        // МНОГО ВНИМАВАМЕ за nullptr.
    }

    Оператор= {
        Ако (другия обект не е текущия) {
            Трием всичко динамично заделено дето имаме;
            Правим каквото копи конструктора прави;
        }
        Връщаме текущия обект.
    }

    Деструктор {
        Трием всичко динамично заделено дето имаме.
        // (delete nullptr is totally fine btw)
    }
}