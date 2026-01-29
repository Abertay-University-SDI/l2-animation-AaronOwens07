#pragma once
#include "Framework/Animation.h"
#include "Framework/GameObject.h"

class Sheep: public GameObject
{
public:
	Sheep();
	virtual ~Sheep() = default;

	void update(float dt) override;
	void handleInput(float dt) override;

	Animation m_walkDown;
	Animation* m_currentAnimation;

private:
	

	
};

