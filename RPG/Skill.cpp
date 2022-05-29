#include "Skill.h"
#include <string>


Skill::Skill(string name, string effectType, int effect, string ressourceUsed, int cost) 
	: mName(name), mEffectType(effectType), mEffect(effect), mRessourceUsed(ressourceUsed), mCost(cost)
{
}
