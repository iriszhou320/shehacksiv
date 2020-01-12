#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"

namespace Game {
	class UbiBooth: public GameEngine::Entity
	{
	public:
		UbiBooth();
		~UbiBooth() = default;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}


