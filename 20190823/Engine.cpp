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

	player = new Player();
	goal = new Goal();
	monster = new Monster();
	map = new Map();
	gameMode = new GameMode();
}

Engine::~Engine()
{
	delete player;
	player = nullptr;

	delete goal;
	goal = nullptr;

	delete monster;
	monster = nullptr;

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

	player->Move(KeyCode, map);
	monster->Move();
	EGameOverType result = gameMode->CheckRule(player, monster, goal);
	switch (result)
	{
		case EGameOverType::Dead:
		{
			bIsRunning = false;
		}
		break;
		case EGameOverType::Escape:
		{
			bIsRunning = false;
		}
		break;
	}
	

}

void Engine::Render()
{
	map->Render();
	player->Render();
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
