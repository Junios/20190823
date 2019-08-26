#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	~Player();

	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;

protected:
	virtual void Move(int KeyCode, class Map* map) override;
};

