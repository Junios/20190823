#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	~Monster();

	virtual void Move(int Keycode, class Map* map) override;
	virtual void Tick() override;
	virtual void Render() override;
};

