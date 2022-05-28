#include "Enemy.h"

Enemy::Enemy(string name, int level, int intelligence, int strength, int agility, int dropExperience, int dropMoney)
	: Character(name, level, 100, 100, 100, strength, agility, intelligence, 0), mDropExperience(dropExperience), mDropMoney(dropMoney)
{
	/*
	this->mName = name;
	this->mLevel = level;
	this->mHealth = 100;
	this->mStamina = 100;
	this->mMana = 100;
	this->mStrength = strength;
	this->mAgility = agility;
	this->mDropExperience = dropExperience;
	this->mDropMoney = dropMoney;
	*/
}

Enemy::Enemy() : Character()
{

}

Enemy::Enemy(string name) : Character()
{
	this->mName = name;
}