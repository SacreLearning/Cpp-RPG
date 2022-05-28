#include "Character.h"
#include <iostream>

using namespace std;

Character::Character(
	string name,
	int level,
	int health,
	int stamina,
	int mana,
	int strength,
	int agility,
	int intelligence,
	int money
) : 
	mName(name),
	mHealth(health), 
	mStamina(stamina), 
	mMana(mana), 
	mStrength(strength), 
	mAgility(agility), 
	mIntelligence(intelligence), 
	mMoney(money), 
	mLevel(level)
{

}

Character::Character() :
	mName("Billie le kid"),
	mHealth(1),
	mStamina(2),
	mMana(3),
	mStrength(4),
	mAgility(5),
	mIntelligence(6),
	mMoney(7),
	mLevel(1)
{

}


int Character::attack(Character character) 
{
	return 1;
}


int Character::getInformation(string info)
{
	if (info == "str") { return mStrength; }
	if (info == "lvl") { return mLevel; }
	if (info == "agi") { return mAgility; }
	if (info == "int") { return mStrength; }
	if (info == "health") { return mHealth; }
	if (info == "stamina") { return mStamina; }
	if (info == "mana") { return mMana; }
}

string Character::getName()
{
	return mName;
}

void Character::showOverview()
{
	cout << getName() << " - level " << getInformation("lvl") << "\n";
	cout << "\tHealth:\t\t " << getInformation("health") << "\n";
	cout << "\tStamina:\t " << getInformation("stamina") << "\n";
	cout << "\tMana:\t\t " << getInformation("mana") << "\n";
	cout << "\tStrength:\t " << getInformation("str") << "\n";
	cout << "\tAgility:\t " << getInformation("agi") << "\n";
	cout << "\tIntelligence:\t " << getInformation("int") << "\n";
}