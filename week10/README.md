# Упражнение №10 - Преговор

## Задача

Клас `Drink`
- `brand` (`string`) (get)
- `alcoholPercentage` (`double`) (get)
- `quantityInLitres` (`double`) (get)
- `void add(double quantityInLitres)`
- `void remove(double quantityInLitres)`
- `string toString() const`: `"{brand} ({alcoholPercentage} %): {quantityInLitres}L"`

Клас `SoftDrink`: наследява `Drink`
- `alcoholPercentage` е винаги 0

Клас `Coke`: наследява `SoftDrink`
- `brand` е винаги `Coca-Cola`
- `type` (`enum{ CLASSIC, LIGHT, ZERO }`) (get)
- `string toString() const`: `"{brand} {type} ({alcoholPercentage} %): {quantityInLitres}L"`, като `{type}` може да е "Classic", "Light" или "Zero"

Клас `Beer`: наследява `Drink`
- `isCraft` (`bool`) (get)
- `type` (`enum{ LIGHT_LAGER, DARK_LAGER, PALE_ALE, IPA, BOK, WEISS, LIVE, OTHER }`) (get) (черпя една такава, ако някой намери как е "жива бира" на английски)

Клас `Whiskey`: наследява `Drink`
- `ageInYears` (`unsigned`) (get)
- `void addAnYear() { ageInYears++; }`

Бонус: проблем на диаманта: клас `NonalcoholicBear` : наследява `SoftDrink` и `Beer`
- `type` е винаги `OTHER`




