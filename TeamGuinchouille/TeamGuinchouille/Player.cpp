#include "pch.h"
#include "Player.h"


Player::Player()
{
	bouclierPtr = nullptr; //Init du pointeur.
}

void Player::LoseHP(int _dmg)
{
	pv -= _dmg * (bouclierPtr ? bouclierPtr->armorRatio : 1.0f);

	/*if (bouclierPtr)
	{
		pv -= bouclierPtr->armorRatio * _dmg;
	}
	else
	{
		pv -= _dmg;
	}*/
}

Player::~Player()
{
	bouclierPtr; //Destruction du pointeur pour éviter les fuites de mémoires. 
}