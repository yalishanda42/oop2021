#pragma once

enum Race
{
    DRAGONBORN,
    DWARF,
    ELF,
    GNOME,
    HALF_ELF,
    HALFLING,
    HALF_ORC,
    HUMAN,
    TIEFLING,
};

class Player
{
private:
    // properties / fields
    Race race;
    int hitpoints;
    int experience;

    // static constants
    //
    // their value is not associated with an instance
    static const int STARTING_HP = 42;
    static const int HEALING_HP = 10;

public:
    // constructors
    Player(Race);

    // race
    Race getRace() const; // getter
    // no setter => it is a "read-only" property

    // hitpoints
    int getHitpoints() const; // getter
    // no single setter but multiple ways to modify it:
    void takeDamage(unsigned int damage);
    void heal();

    // experience
    int getExperience() const;
    void gainExperience(unsigned int gainedXP);

    // level
    //
    // there is no need to store its value
    // because it can be derived from `experience`
    // with a quick calculation
    int getLevel() const;
};
