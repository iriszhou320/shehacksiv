#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\AnimationComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game
{
	class Person1: public GameEngine::Entity
	{
	public:
		Person1();
		~Person1() = default;
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};
}


