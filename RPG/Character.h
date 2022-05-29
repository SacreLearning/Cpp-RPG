#pragma once

#include "Equipment.h"
#include "Skill.h"
#include <list>

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

		Character(
			string name,
			int level,
			int health,
			int stamina,
			int mana,
			int strength,
			int agility,
			int intelligence,
			int money,
			int experience
		);

		Character();

		/// <summary>
		/// Use a skill on a target
		/// </summary>
		/// <param name="skill"></param>
		/// <param name="target"></param>
		void useSkill(Skill skill, Character target);

		void equip(Equipment equipment);
		void unequip(Equipment equipment);
		void equip(Skill skill);
		void unequip(Skill Skill);

		void levelUp();
		void die();
		void showOverview();

		/// <summary>
		/// get information on a stat
		/// </summary>
		/// <param name="str"></param>
		/// <returns></returns>
		int getInformation(string str);
		string getName();

	protected:

		string mName;
		list<Equipment> equipments;
		list<Skill> skills;

		int mCurrentHealth;
		int mCurrentStamina;
		int mCurrentMana;
		int mMaxHealth;
		int mMaxStamina;
		int mMaxMana;

		int mLevel;
		int mExperience;
		int mStrength;
		int mAgility;
		int mIntelligence;
		int mMoney;
};




