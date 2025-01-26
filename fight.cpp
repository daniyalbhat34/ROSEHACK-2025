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
    
    } else if (option == 'h') {
      player.heal();
    } else {
      cout << "Invalid Input\n";
    }

    if (player.health <= 0) {
      cout << "You died.\n";
      exit(0);
    } else if (enemy.health <= 0) {
      cout << "You win this battle.\n";
      return;
    }
  }

}