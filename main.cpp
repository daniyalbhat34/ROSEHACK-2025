using namespace std;
#include <iostream>
#include "fight.h"
#include "character.h"


int main(){

    string characterName = "";
    cout << "Hello there adventurer! Please select your character name:" << endl;
    getline(cin, characterName); 
    cout << "Welcome to the battle arena, "  << characterName << "! Are you ready to face off against a Level 1 Enemy?" << endl;
