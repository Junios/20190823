#include "Engine.h"
#include <iostream>

//STL
#include <vector>
#include <list>
//#include <map>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "Map2.h"
#include "Goal.h"
#include "Monster.h"

using namespace std;

int main()
{
	Engine* engine = new Engine();
	engine->actors.push_back(new Map2());
	engine->actors.push_back(new Goal());
	engine->actors.push_back(new Player());
	engine->actors.push_back(new Monster());
	engine->actors.push_back(new Monster());

	engine->Run();
	delete engine;
	engine = nullptr;

	
	return 0;
}

void STLTest()
{
	vector<int> v;
	list<int> l;
	int a[6];

	for (int i = 0; i <= 5; ++i)
	{
		v.push_back(i);
		l.push_back(i);
		a[i] = i;
	}
	
	//v.erase(v[3]);


	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i] << endl;
	//}
	//for (int i = 0; i < l.size(); ++i)
	//{
	//	cout << l[i] << endl;
	//}
	//반복자
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	//for (auto iter = v.begin(); iter != v.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//for (auto iter = l.begin(); iter != l.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//인덱스 안 해 될 경우, 숫자 경우 X
	for (auto iter : a)
	{
		cout << iter << endl;
	}
}