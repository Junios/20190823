#pragma once
class Monster
{
public:
	Monster();
	~Monster();

	int X;
	int Y;

	void Initialize();
	void Move(class Map* map);
	char Shape;

	void Render();
};

