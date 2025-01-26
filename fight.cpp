#include <iostream>
#include "fight.h"
using namespace std;

void start_fight(Character& player, Character& enemy) {
  char option;
  cout << "You just got into a fight!\n What would you like to do?\n";
  while (true) {
    cout << "Enter \"a\" to attack\n";
    cout << "Enter \"h\" to heal\n";
    cin >> option;

    if (option == 'a') {
      player.attack(enemy);     
      cout << "The damage was " << player.weapon.damage << " and your remaining enemy health is "
        << enemy.health << endl; 
    } else if (option == 'h') {
      player.heal();
    } else {
      cout << "Invalid Input\n";
    }

    enemy.attack(player);
    cout << "The enemy attacked you for " << enemy.weapon.damage << " damage and your remaining health is "
        << player.health << endl; 

    if (player.health <= 0 || player.stamina <= 0) {
      cout << "You died.\n";
      exit(0);
    } else if (enemy.health <= 0 || enemy.stamina <= 0) {
      cout << "You win this battle.\n";
      return;
    }
  }

}