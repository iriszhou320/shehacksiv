#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\AnimationComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game
{
	class Person2 : public GameEngine::Entity
	{
	public:
		Person2();
		~Person2() = default;
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};
}
