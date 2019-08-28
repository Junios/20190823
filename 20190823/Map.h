#pragma once
#include "MapBase.h"

class Map : public MapBase
{
public:
	Map();
	~Map();

	virtual void Render() override;

	int data[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{1,1,1,1,1,1,1,1,1,1},
	};
};

