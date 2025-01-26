#pragma once

#include "weapons.h"

constexpr int MAX_HEALTH = 100;
constexpr int MAX_STAMINA = 100;

class Character {
public:
  int stamina;
  int health;
  Weapon weapon;
  

public:
  virtual void attack(Character& enemy) = 0;
  virtual void heal() = 0;
  Character(Weapon weapon) : weapon(weapon) {
    health = MAX_HEALTH;
    stamina = MAX_STAMINA;
  };
};