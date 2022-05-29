#pragma once

#include <string>

using namespace std;

class Equipment
{
public:
	Equipment(string name, string type, int attackPower, int strength, int agility, int intelligence, int defence);

protected:
	string mName; 
	string mType;
	int mAttackPower;
	int mStrength;
	int mAgility;
	int mIntelligence;
	int mDefence;
};

