#pragma once
class Actor
{
public:
	Actor();
	~Actor();

//protected:
	virtual void Input();
	virtual void Tick();
	virtual void Render();
};

