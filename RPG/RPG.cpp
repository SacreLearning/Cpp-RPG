// RPG.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

#include "Character.h"
#include "Enemy.h"
#include "Player.h"
#include "Action.h"

using namespace std;

int main()
{
    Player player("Barta", 10, 10, 10);
    Enemy enemy("Billie", 5, 10, 10, 10, 20, 30);

    player.showOverview();
    enemy.showOverview();

    string entry;
    int exit = 0;

    while (exit == 0)
    {
        cout << "RPG>";
        getline(cin, entry);
        entry = Action(entry, player);
    }
}