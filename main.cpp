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

	vector<FCharacter*> Characters;

	int Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FSlime());
	}

	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FGoblin());
	}

	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FWildBoar());
	}
	
	while (1)
	{
		Player->Move();
		for (int i = 0; i < Characters.size(); ++i)
		{
			Characters[i]->Move();
		}
	}
	//Slimes->Move(); //1-3
	//Goblins->Move(); //1-3
	//WildBoars->Move(); //1-3

	delete Player;
	for (int i = 0; i < Characters.size(); ++i)
	{
		delete Characters[i];
	}
	//delete Slimes;
	//delete Goblins;
	//delete WildBoars;

	return 0;
}
