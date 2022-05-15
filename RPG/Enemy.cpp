#include "Enemy.h"

Enemy::Enemy(string name, int level, int intelligence, int strength, int agility, int dropExperience, int dropMoney)
	: Character(name, level, 100, 100, 100, strength, agility, intelligence, 0), mDropExperience(dropExperience), mDropMoney(dropMoney)
{

}