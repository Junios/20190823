#include "Goal.h"
#include "GameplayStatics.h"
#include <stdio.h>


Goal::Goal()
{
	X = 8;
	Y = 8;
	Shape = 'G';
}


Goal::~Goal()
{
}

void Goal::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}
