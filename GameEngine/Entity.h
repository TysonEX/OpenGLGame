#pragma once
#include <vector>
#include "Component.h"


class Entity
{
public:
	virtual ~Entity()
	{
		for (int i = 0; i < components.size(); i++)
		{
			delete components[i];
		}
	}

	virtual void Update(GLfloat elapsedTime) = 0;

	virtual void AddComponent(Component* component)
	{
		component->SetOwner(this);
		components.push_back(component);
	}

protected:
	Entity() {}
	std::vector<Component*> components;
};

