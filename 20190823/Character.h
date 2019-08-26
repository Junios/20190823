#pragma once
#include "Actor.h"

class Character : public Actor
{
public:
	Character();
	~Character();

	int X;
	int Y;

	char Shape;

	virtual void Input() override;
	virtual void Tick() override;
	virtual void Render() override;

	virtual void Move(int KeyCode, class Map* map);
};

