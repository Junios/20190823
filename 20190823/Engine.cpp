#include "Engine.h"
#include <iostream>
#include "Player.h"
#include "Map.h"
#include "Goal.h"
#include "Monster.h"
#include "GameMode.h"
#include <conio.h>

Engine::Engine()
{
	bIsRunning = true;
	std::cout << "Engine Constructor" << std::endl;

	//player = new Player();
	//goal = new Goal();

	//monsters.push_back(new Monster());
	//monsters.push_back(new Monster());
	//monsters.push_back(new Monster());
	//monsters.push_back(new Monster());
	//monsters.push_back(new Monster());

	//map = new Map();
	//gameMode = new GameMode();
}

Engine::~Engine()
{
	delete player;
	player = nullptr;

	delete goal;
	goal = nullptr;


	//메모리 Release
	for (auto monster : monsters)
	{
		delete monster;
		monster = nullptr;
	}
	//벡터 삭제
	monsters.erase(monsters.begin(), monsters.end());

	delete map;
	map = nullptr;

	delete gameMode;
	gameMode = nullptr;
	std::cout << "Engine Destructor" << std::endl;
}

void Engine::Input()
{
	KeyCode = _getch();
}

void Engine::Tick()
{
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}

	for (auto actor : actors)
	{
		actor->Tick();
	}

	//EGameOverType result = gameMode->CheckRule(player, monster, goal);
	//switch (result)
	//{
	//	case EGameOverType::Dead:
	//	{
	//		bIsRunning = false;
	//	}
	//	break;
	//	case EGameOverType::Escape:
	//	{
	//		bIsRunning = false;
	//	}
	//	break;
	//}
	

}

void Engine::Render()
{
	for (auto actor : actors)
	{
		actor->Render();
	}
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}
