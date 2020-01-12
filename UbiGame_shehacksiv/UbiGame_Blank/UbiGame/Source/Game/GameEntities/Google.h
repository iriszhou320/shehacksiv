#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game {
	class Google : public GameEngine::Entity
	{
	public:
		Google();
		~Google() = default;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}


