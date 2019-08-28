#include "GameplayStatics.h"
#include <Windows.h>

void GameplayStatics::GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void GameplayStatics::SetTextColor(int Foreground, int Background)
{
	int color = Foreground + Background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
