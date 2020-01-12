#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\AnimationComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game
{
	class Person3 : public GameEngine::Entity
	{
	public:
		Person3();
		~Person3() = default;
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};
}
