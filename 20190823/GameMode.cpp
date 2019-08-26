#include "GameMode.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include <vector>
#include "Actor.h"
#include "Character.h"

using namespace std;

GameMode::GameMode()
{
}


GameMode::~GameMode()
{
}


EGameOverType GameMode::CheckRule(vector<Actor*> actors)
{
	Player* player = dynamic_cast<Player*>(actors[2]);
	Goal* goal = dynamic_cast<Goal*>(actors[1]);

	if (!player || !goal)
	{
		return EGameOverType::Playing;
	}

	if (player->X == goal->X &&
		player->Y == goal->Y)
	{
		return EGameOverType::Escape;
	}

	for (int i = 3; i < actors.size(); ++i)
	{
		Monster* monster = dynamic_cast<Monster*>(actors[i]);

		if (!monster)
		{
			continue;
		}
		if (player->X == monster->X &&
			player->Y == monster->Y)
		{
			return EGameOverType::Dead;
		}
	}

	return EGameOverType::Playing;
}
