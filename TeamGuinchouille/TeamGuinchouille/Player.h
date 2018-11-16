#pragma once

#include "Bouclier.h"

class Player
{
private: 
	Bouclier* bouclierPtr;
	int pv = 10;


public:
	Player();
	~Player();
	Bouclier* getBouclier() { return bouclierPtr; }
	void setBouclier(Bouclier* _bouclier) { bouclierPtr = _bouclier; }
	void setBouclier2(Bouclier& _bouclier) { bouclierPtr = &_bouclier; }
	void LoseHP(int _dmg);
	int GetPV() { return pv; }
};