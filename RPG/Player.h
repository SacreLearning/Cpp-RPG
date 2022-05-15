#pragma once

#include "Character.h"

using namespace std;

class Player : public Character
{
	public:
		Player(string name, int intelligence, int strength, int agility);
};

