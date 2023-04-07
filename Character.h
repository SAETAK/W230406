#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	int HP;
	int MP;

	virtual void Move();
	void Attack();
};

