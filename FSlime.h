#pragma once
#include "Character.h"
#include <vector>


class FSlime : public FCharacter
{
public:
	FSlime();
	~FSlime();
	void Move() override;

};

