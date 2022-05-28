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
    Enemy enemymechant = Enemy();
    Enemy enemygentil = Enemy("Gentil enemy");

    player.showOverview();
    enemy.showOverview();
    enemymechant.showOverview();
    enemygentil.showOverview();

    string entry;
    int exit = 0;

    while (exit == 0)
    {
        cout << "RPG>";
        getline(cin, entry);
        entry = Action(entry, player);
    }
}