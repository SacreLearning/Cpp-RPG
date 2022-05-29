#pragma once
#include <string>
using namespace std;

class Skill
{
	public:
		Skill(string name, string effectType, int effect, string ressourceUsed, int cost);

	protected:
		string mName;
		string mEffectType;
		int mEffect;
		string mRessourceUsed;
		int mCost;
};

