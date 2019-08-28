#include "Map.h"
#include <stdio.h>
#include <stdlib.h>
#include "GameplayStatics.h"



Map::Map()
{
	Size = 10;
}


Map::~Map()
{
}

void Map::Render()
{
	MapBase::Render();

	for (int y = 0; y < Size; y++)
	{
		for (int x = 0; x < Size; x++)
		{
			GameplayStatics::GotoXY(x, y);
			printf("%c", Tile[data[y][x]]);
		}
	}
}
