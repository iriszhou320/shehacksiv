#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
namespace Game {
	class Correct : public GameEngine::Entity
	{
	public:
		Correct();
		~Correct() = default;


	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};


}
