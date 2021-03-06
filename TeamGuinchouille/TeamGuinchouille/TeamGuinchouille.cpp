// TeamGuinchouille.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include "Player.h"

class Transform
{
public:
	Transform();
	float position;
	float rotation;
private:
	float scale;
};

Transform::Transform() 
	: position(5.0f)
	, rotation(2.5f)
	, scale(12.2f)
{
	
}

int integer = 98;

int tab[8];

void Get(int* montab)

{
	montab[5];
}

int main()
{
	Player* playerPtr = new Player();
	Bouclier* bouclierPtr = new Bouclier();

	playerPtr->setBouclier(bouclierPtr); 
	playerPtr->LoseHP(8);

	int compteur = 0; 

	/*for (size_t i = 0; i < 50000000000; i++)
	{
		playerPtr = new Player();
	}*/

	playerPtr = NULL;

	Get(tab);
	int* intPointer = NULL;
	Transform* transformPointer = NULL;

	std::cout << "intPointer : " << intPointer << std::endl;

	intPointer = &integer;

	std::cout << "intPointer : " << intPointer << std::endl;

	std::cout << "*intPointer : " << *intPointer << std::endl; //Déréferecement

	
	if (transformPointer)
	{
		std::cout << "transformPointer : " << transformPointer << std::endl;

		std::cout << "transformPointer->position : " << transformPointer->position << std::endl;

		std::cout << "(*transformPointer).position : " << (*transformPointer).position << std::endl;
	}

	transformPointer = new Transform();

	if (transformPointer)
	{
		std::cout << "transformPointer : " << transformPointer << std::endl;

		std::cout << "transformPointer->position : " << transformPointer->position << std::endl;

		std::cout << "(*transformPointer).position : " << (*transformPointer).position << std::endl;
	}
	

	_getch(); //Fait attendre la console 
}