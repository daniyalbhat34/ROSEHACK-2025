#include "player.h"

using namespace std;

void Player::attack(Character& enemy) {
    enemy.health -= enemy.weapon.damage;
    enemy.stamina -= 5;
    cout << "The damage was " << enemy.weapon.damage << "and the remaining enemy health is "
        << enemy.health << endl;;
}
void Player::heal() {
    health = min(100, health + stamina);
}


