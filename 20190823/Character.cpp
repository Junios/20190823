#include "Character.h"
#include <stdio.h>


Character::Character()
{
}


Character::~Character()
{
}

void Character::Input()
{
}

void Character::Tick()
{
}

void Character::Render()
{
	Actor::Render();
	printf("Character::Render()");
}

void Character::Move(int KeyCode, Map * map)
{
}
