#include <iostream>
#include "FPlayer.h"
#include "FSlime.h"
#include "FGoblin.h"
#include "FWildBoar.h"

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();
	FSlime* Slime = new FSlime();
	FGoblin* Goblin = new FGoblin();
	FWildBoar* WildBoar = new FWildBoar();

	Player->Move();
	Slime->Move();
	Goblin->Move();
	WildBoar->Move();

	delete Player;
	delete Slime;
	delete Goblin;
	delete WildBoar;

	return 0;
}
