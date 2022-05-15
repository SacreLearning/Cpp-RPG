#pragma once

#include "Character.h"

class Enemy : public Character
{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name="name"></param>
		/// <param name="intelligence"></param>
		/// <param name="strength"></param>
		/// <param name="agility"></param>
		/// <param name="dropExperience"></param>
		/// <param name="dropMoney"></param>
		Enemy(string name, int level, int intelligence, int strength, int agility, int dropExperience, int dropMoney);

	protected:
		int mDropExperience;
		int mDropMoney;
};