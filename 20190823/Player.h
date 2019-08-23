#pragma once
class Player
{
public:
	Player();
	~Player();

	int X;
	int Y;

	void Initialize();
	void Move();
	char Shape;
};

