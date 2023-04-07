#pragma once
#include "Character.h"
#include <algorithm>

class FWildBoar : public FCharacter
{
public:
	FWildBoar();

	void Shuffle()
	{
		srand((unsigned int)time(nullptr));
		random_shuffle(WildBoar.begin(), WildBoar.end());
	}

	void Spawn(FCharacter NewWildBoar)
	{
		WildBoar.push_back(NewWildBoar);
	}

private:
	vector<FCharacter> WildBoar;
};

