#include <iostream>
#include "FPlayer.h"
#include "FSlime.h"
#include "FGoblin.h"
#include "FWildBoar.h"
#include <vector>

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer(); //1
	vector<FSlime*> Slime; //1-3
	vector<FGoblin*> Goblin; //1-3
	vector<FWildBoar*> WildBoar; //1-3

	

	Player->Move();
	Slime->Move(); //1-3
	Goblin->Move(); //1-3
	WildBoar->Move(); //1-3

	delete Player;
	delete Slime;
	delete Goblin;
	delete WildBoar;

	return 0;
}
