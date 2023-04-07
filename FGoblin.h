#pragma once
#include "Character.h"

class FGoblin : public FCharacter
{
public:
	FGoblin();

	void Shuffle()
	{
		srand((unsigned int)time(nullptr));
		random_shuffle(Goblin.begin(), Goblin.end());
	}

	void Spawn(FCharacter NewGoblin)
	{
		Goblin.push_back(NewGoblin);
	}

private:
	vector<FCharacter> Goblin;
};

