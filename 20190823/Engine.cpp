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
}

Engine::~Engine()
{
	for (auto actor : actors)
	{
		delete actor;
		actor = nullptr;
	}
	actors.clear();

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
		//actors 0Àº ¹«Á¶°Ç ¸Ê
		actor->Tick(KeyCode, (Map*)actors[0]);
	}

	EGameOverType result = gameMode->CheckRule(actors);
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
