#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "Game\Components\DialogueComponent.h"
namespace Game {
	class BellDialogue : public GameEngine::Entity
	{
	public:
		BellDialogue();
		~BellDialogue() = default;
		DialogueComponent* m_dialogueComponent;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}



