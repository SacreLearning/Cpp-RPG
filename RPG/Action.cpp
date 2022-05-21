#include "Action.h"
#include <iostream>

using namespace std;

string logAction(string entry, Character& cible)
{
    if (entry.size() <= 0)
    {
        cout << "Aucune commande recu." << endl;
        return "";

    }

    if (entry == "exit") { exit(EXIT_SUCCESS); }

    if (entry == "help")
    {
        cout << "exit : Ferme le programme" << endl;
        cout << "attaque ou a : Attaque une cible" << endl;
        cout << "etat : Retourne l'etat du personnage" << endl;
        cout << "--EOF--" << endl;
        return "";
    }

    if (entry == "attaque" || entry == "a")
    {
        cout << "Commande attaque recu." << endl;
        //cible.attack();
        return "";
    }

    if (entry == "etat")
    {
        cout << endl << "Etat actuel du personnage :" << endl;
        cible.showOverview();
        return "";
    }

    cout << "Commande non reconnue." << "(" << entry << ")" << endl;
    return "";


}
