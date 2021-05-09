# Упражнение №11 - Полиморфизъм

## 0

* `static_cast` vs `dynamic_cast`, upcasting & downcasting
* `virtual` методи и деструктори
* хетерогенни контейнери
* pure virtual методи & абстрактни класове

## 1

* клас `Pet`

    * `name` (`string`) (get+set)
    * `health` (`int`) (get) (default: 100)

    * чисто виртуален `pet()` с имплементация, която `cout`-ва "Petting {name}"
    * чисто виртуален `feed()` без имплементация

* клас `Dog` : `Pet`

    * override `pet()`: `cout`-ва "Petting {{name}}: bark bark"
    * override `feed()`: `health++`
    * `walk()`: `health += 5`

* клас `Cat` : `Pet`

    * override `pet()`: `cout`-ва "Petting {{name}}: purrr"
    * override `feed()`: `health += 2`

* клас `Snek` : `Pet`

    * override `pet()`: `cout`-ва "Petting {{name}}: sss"
    * оverride `feed()`: `health += 5`

* клас `Person`

    * хетерогенен контейнер с различни `Pet`-чета
    * `adopt(Pet*)`
    * `feedEmAll()`
    * `petEmAll()`
    * `walkAllDogs()`