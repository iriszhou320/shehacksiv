#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"

namespace Game {
	class Bell : public GameEngine::Entity
	{
	public:
		Bell();
		~Bell() = default;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}
