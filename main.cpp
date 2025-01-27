#include <iostream>
#include "fight.h"
#include "character.h"
#include "player.h"
#include "weapons.h"
#include <limits>
#include <stdexcept>

using namespace std;

int main() {
    string characterName = "";
    cout << "Hello there adventurer! Please select your character name:" << endl;
    getline(cin, characterName);
    if(cin.fail()) {
        throw runtime_error("Input stream operation failed \n");
    }
    cout << "Welcome to the battle arena, "  << characterName << "! Are you ready to face off against a Level 1 Enemy?" << endl;

    Weapon weapon1(20);
    Weapon weapon2(10);
    Player player(weapon1);

    int num_fights = 0;
    bool not_valid = true;

    while (not_valid) {
        cout << "How many enemies would you like to fight?\n";
        cin >> num_fights;
        if(cin.fail()) {
            cout << "Input operation failed, try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (num_fights <= 0) {
            cout << "Please enter a valid number\n";
        } else {
            not_valid = false;
        }
    }

    for (int i = 0; i < num_fights; i++) {
        Player enemy(weapon2);
        start_fight(player, enemy);
        cout << "\n\n";
    }
}