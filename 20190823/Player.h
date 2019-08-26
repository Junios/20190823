#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	~Player();

	virtual void Move(int KeyCode, class Map* map) override;
	virtual void Tick() override;
	virtual void Render() override;
};

