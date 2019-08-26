#pragma once
#include <vector>

using namespace std;

class Engine
{
public:
	Engine();
	~Engine();
	void Run();


	vector<class Actor*> actors;


private:
	bool bIsRunning;
	int KeyCode;

	void Input();
	void Tick();
	void Render();

	class Player* player;
	class Map* map;

	vector<class Monster*> monsters;

	class Goal* goal;
	class GameMode* gameMode;
};

