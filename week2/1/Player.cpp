#include "Player.hpp"
#include <iostream>

Player::Player(Race race)
{
    this->race = race;
    hitpoints = Player::STARTING_HP;
    experience = 0;
}

Race Player::getRace() const
{
    return race;
}

int Player::getHitpoints() const
{
    return hitpoints;
}

void Player::takeDamage(unsigned int damage)
{
    hitpoints -= damage;
    if (hitpoints <= 0)
    {
        hitpoints = 0;
        std::cout << "Player died." << std::endl;
    }
}

void Player::heal()
{
    hitpoints += Player::HEALING_HP;
}

int Player::getExperience() const
{
    return experience;
}

void Player::gainExperience(unsigned int gainedXP)
{
    experience += gainedXP;
}

int Player::getLevel() const
{
    return (experience / 1000) + 1;
}
