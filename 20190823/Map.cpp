#include "Map.h"
#include <stdio.h>
#include <stdlib.h>
#include "GameplayStatics.h"



Map::Map()
{
}


Map::~Map()
{
}

void Map::Initialize()
{
}

void Map::Render()
{
	system("cls");

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			GameplayStatics::GotoXY(x, y);
			printf("%c", Tile[data[y][x]]);
		}
	}
}
