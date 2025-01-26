#pragma once;

#include "character.h"

class Player : public Character {
 public:
    void attack(Character& enemy);
    void heal();
};