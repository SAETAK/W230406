#pragma once
#include "Character.h"
#include <vector>
#include <algorithm>

class FSlime : public FCharacter
{
public:
	FSlime();

	void Shuffle()
	{
		srand((unsigned int)time(nullptr));
		random_shuffle(Slime.begin(), Slime.end());
	}

	void Spawn(FCharacter NewSlime)
	{
		Slime.push_back(NewSlime);
	}

private:
	vector<FCharacter> Slime;
};

