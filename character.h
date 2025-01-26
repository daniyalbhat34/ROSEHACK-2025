#pragma once

#include "weapons.h"

class Character {
private:
  int stamina;
  int health;
  Weapon weapon;

public:
  virtual void attack(Character& enemy) = 0;
  virtual void heal() = 0;
  Character(int stamina, int health, Weapon weapon) : stamina(stamina), health(health), weapon(weapon) {};
};