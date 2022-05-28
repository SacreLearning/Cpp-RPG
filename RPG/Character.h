#pragma once

#include "Armor.h"
#include "Weapon.h"

using namespace std;

class Character
{
	public:
		/// <summary>
		/// Basis to create a character
		/// </summary>
		/// <param name="name"></param>
		/// <param name="level"></param>
		/// <param name="health"></param>
		/// <param name="stamina"></param>
		/// <param name="mana"></param>
		/// <param name="strength"></param>
		/// <param name="agility"></param>
		/// <param name="intelligence"></param>
		/// <param name="money"></param>
		Character(
			string name,
			int level,
			int health,
			int stamina,
			int mana,
			int strength,
			int agility,
			int intelligence,
			int money
		);

		Character();

		int getInformation(string str);
		string getName();
		void showOverview();
		int attack(Character character);


	protected:

		string mName;
		Armor mArmor;
		Weapon mWeapon;
		int mLevel;
		int mHealth;
		int mStamina;
		int mMana;
		int mStrength;
		int mAgility;
		int mIntelligence;
		int mMoney;
};




