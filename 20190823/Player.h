#pragma once
class Player
{
public:
	Player();
	~Player();

	int X;
	int Y;

	void Initialize();
	void Move(int KeyCode, class Map* map);
	char Shape;


	void Render();
};

