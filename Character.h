#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	int HP;
	int MP;

	void Move();
	void Attack();
};

