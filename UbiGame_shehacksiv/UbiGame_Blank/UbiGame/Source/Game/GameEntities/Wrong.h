#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game {
	class Wrong : public GameEngine::Entity
	{
	public:
		Wrong();
		~Wrong() = default;


	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};


}

