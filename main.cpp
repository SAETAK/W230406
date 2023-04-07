#include <iostream>
#include "FPlayer.h"
#include "FSlime.h"
#include "FGoblin.h"
#include "FWildBoar.h"
#include <vector>

using namespace std;

int main()
{
	srand((unsigned int)time);
	FPlayer* Player = new FPlayer(); //1

	vector<FSlime*> Slimes; //1-3
	vector<FGoblin*> Goblins; //1-3
	vector<FWildBoar*> WildBoars; //1-3
	int Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Slimes.push_back(new FSlime());
	}
	
	for (int i = 0; i < Count; ++i)
	{
		Goblins.push_back(new FGoblin());
	}

	for (int i = 0; i < Count; ++i)
	{
		WildBoars.push_back(new FWildBoar());
	}

	while (1)
	{
		Player->Move();
		for (int i = 0; i < Slimes.size(); ++i)
		{
			Slimes[i]->Move();
		}
		for (int i = 0; i < Goblins.size(); ++i)
		{
			Goblins[i]->Move();
		}
		for (int i = 0; i < WildBoars.size(); ++i)
		{
			WildBoars[i]->Move();
		}
	}
	//Slimes->Move(); //1-3
	//Goblins->Move(); //1-3
	//WildBoars->Move(); //1-3

	delete Player;
	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Goblins.size(); ++i)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < WildBoars.size(); ++i)
	{
		delete WildBoars[i];
	}
	//delete Slimes;
	//delete Goblins;
	//delete WildBoars;

	return 0;
}
