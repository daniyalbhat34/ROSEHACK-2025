#include "player.h"

using namespace std;

void Player::attack(Character& enemy) {
    enemy.health -= weapon.damage;
    stamina -= 5;
}
void Player::heal() {
    health = min(100, health + stamina);
    cout << "After healing, your health is " << health << endl;
}


