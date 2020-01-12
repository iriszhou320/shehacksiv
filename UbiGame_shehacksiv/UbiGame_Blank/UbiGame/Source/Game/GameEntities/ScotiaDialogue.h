#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "Game\Components\DialogueComponent.h"
namespace Game {
	class ScotiaDialogue : public GameEngine::Entity
	{
	public:
		ScotiaDialogue();
		~ScotiaDialogue() = default;
		DialogueComponent* m_dialogueComponent;

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};

}


