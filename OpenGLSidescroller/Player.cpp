#include "Player.h"


Player::Player(unsigned long entityID) :
	Entity(entityID)
{}

Player::~Player() {}

bool Player::Init(tinyxml2::XMLElement* node)
{
	if (node != nullptr)
		return true;
	else
		return false;
}

void Player::Destroy() {}
