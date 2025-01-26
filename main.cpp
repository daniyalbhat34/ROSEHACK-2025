#include <iostream>
#include "fight.h"
#include "character.h"
#include "player.h"
#include "weapons.h"

using namespace std;

int main() {

    string characterName = "";
    cout << "Hello there adventurer! Please select your character name:" << endl;
    getline(cin, characterName); 
    cout << "Welcome to the battle arena, "  << characterName << "! Are you ready to face off against a Level 1 Enemy?" << endl;

    Weapon weapon1(20);
    Weapon weapon2(10);
    Player player(weapon1);
    Player enemy(weapon2);
    start_fight(weapon,1, weapon2);
}