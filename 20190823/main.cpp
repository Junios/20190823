#include "Engine.h"
#include <iostream>

//STL
#include <vector>
#include <list>
//#include <map>

using namespace std;

int main()
{
	Engine* engine = new Engine();
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
	//�ݺ���
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	//for (auto iter = v.begin(); iter != v.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//for (auto iter = l.begin(); iter != l.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//�ε��� �� �� �� ���, ���� ��� X
	for (auto iter : a)
	{
		cout << iter << endl;
	}
}