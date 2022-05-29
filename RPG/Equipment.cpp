#include "Equipment.h"
#include <string>
using namespace std;

Equipment::Equipment(string name, string type, int attackPower, int strength, int agility, int intelligence, int defence)
	: mName(name), mType(type), mAttackPower(attackPower), mStrength(strength), mAgility(agility), mIntelligence(intelligence), mDefence(defence)
{
}
