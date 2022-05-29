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
	mMaxHealth(health),
	mMaxStamina(stamina),
	mMaxMana(mana),
	mStrength(strength),
	mAgility(agility),
	mIntelligence(intelligence),
	mMoney(money),
	mLevel(level),
	mExperience(0)
{
	mCurrentHealth = mMaxHealth;
	mCurrentStamina = mMaxStamina;
	mCurrentMana = mMaxMana;
}

Character::Character(string name, int level, int health, int stamina, int mana, int strength, int agility, int intelligence, int experience, int money ) :
	mName(name),
	mMaxHealth(health),
	mMaxStamina(stamina),
	mMaxMana(mana),
	mStrength(strength),
	mAgility(agility),
	mIntelligence(intelligence),
	mMoney(money),
	mLevel(level),
	mExperience(experience)
{
	mCurrentHealth = mMaxHealth;
	mCurrentStamina = mMaxStamina;
	mCurrentMana = mMaxMana;
}

Character::Character()
{
}



void Character::useSkill(Skill skill, Character target) 
{
}

void Character::equip(Equipment equipment)
{
}

void Character::unequip(Equipment equipment)
{
}

void Character::equip(Skill skill)
{
}

void Character::unequip(Skill Skill)
{
}


int Character::getInformation(string info)
{
	if (info == "str") { return mStrength; }
	if (info == "lvl") { return mLevel; }
	if (info == "agi") { return mAgility; }
	if (info == "int") { return mStrength; }
	if (info == "currentHealth") { return mCurrentHealth; }
	if (info == "currentStamina") { return mCurrentStamina; }
	if (info == "currentMana") { return mCurrentMana; }
	if (info == "maxHealth") { return mMaxHealth; }
	if (info == "maxStamina") { return mMaxStamina; }
	if (info == "maxMana") { return mMaxMana; }
	if (info == "money") { return mMoney; }
	if (info == "exp") { return mExperience; }
}

string Character::getName()
{
	return mName;
}

void Character::levelUp()
{
}

void Character::die()
{
}

void Character::showOverview()
{
	cout << getName() << " - level " << getInformation("lvl") << " (" << getInformation("exp") << "exp)\n";
	cout << "\tHealth:\t\t " << getInformation("currentHealth") << "/" << getInformation("maxHealth") << "\n";
	cout << "\tStamina:\t " << getInformation("currentStamina") << "/" << getInformation("maxStamina") << "\n";
	cout << "\tMana:\t\t " << getInformation("currentMana") << "/" << getInformation("maxMana") << "\n";
	cout << "\tStrength:\t " << getInformation("str") << "\n";
	cout << "\tAgility:\t " << getInformation("agi") << "\n";
	cout << "\tIntelligence:\t " << getInformation("int") << "\n\n";

	cout << "\Hold:\t " << getInformation("money") << " coin.\n";
}