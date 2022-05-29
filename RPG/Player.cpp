#include "Player.h"

using namespace std;

Player::Player(string name, int intelligence, int strength, int agility)
	: Character(name, 1, 100, 100, 100, strength, agility, intelligence, 0)
{

}