#include "Character.h"
#include <stdio.h>
#include "GameplayStatics.h"


Character::Character()
{
}


Character::~Character()
{
}

void Character::Input()
{
}

void Character::Tick(int KeyCode, class Map* map)
{
}

void Character::Render()
{
	GameplayStatics::SetTextColor(ForegroundColor, BackgroundColor);
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);

	GameplayStatics::SetTextColor(WHITE, BLACK);
}

void Character::Move(int KeyCode, Map * map)
{
}
