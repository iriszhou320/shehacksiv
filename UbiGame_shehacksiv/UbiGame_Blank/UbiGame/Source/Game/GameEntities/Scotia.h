#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"

namespace Game {
	class Scotia : public GameEngine::Entity
	{
	public:
		Scotia();
		~Scotia() = default;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}