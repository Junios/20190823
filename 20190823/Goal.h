#pragma once
#include "Actor.h"

class Goal : public Actor
{
public:
	Goal();
	~Goal();

	int X;
	int Y;

	char Shape;
	void Render();
};

