#pragma once
class Monster
{
public:
	Monster();
	~Monster();

	int X;
	int Y;

	void Initialize();
	void Move();
	char Shape;
};

