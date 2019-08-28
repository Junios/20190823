#include "Map2.h"
#include "GameplayStatics.h"
#include <stdio.h>


Map2::Map2()
{
	Size = 20;
}


Map2::~Map2()
{
}


void Map2::Render()
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