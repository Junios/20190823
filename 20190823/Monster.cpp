#include "Monster.h"
#include <stdlib.h>
#include <time.h>
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>


Monster::Monster()
{
	X = 5;
	Y = 5;
	Shape = 'M';
	srand(time(nullptr));
}


Monster::~Monster()
{
}

void Monster::Move(int Keycode, Map* map)
{
	int NewMonsterX = X;
	int NewMonsterY = Y;

	int Direction = rand() % 4;

	if (Direction == 0)
	{
		NewMonsterY--;
	}
	else if (Direction == 1)
	{
		NewMonsterY++;
	}
	else if (Direction == 2)
	{
		NewMonsterX--;
	}
	else if (Direction == 3)
	{
		NewMonsterX++;
	}

	if (map->data[NewMonsterY][NewMonsterX] == 0)
	{
		X = NewMonsterX;
		Y = NewMonsterY;
	}
}

void Monster::Tick()
{
}

void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}