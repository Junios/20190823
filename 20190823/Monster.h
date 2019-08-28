#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	~Monster();

	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;

protected:
	virtual void Move(int KeyCode, class Map* map) override;
};

