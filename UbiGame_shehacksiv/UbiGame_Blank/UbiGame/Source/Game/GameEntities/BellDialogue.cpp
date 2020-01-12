#include "BellDialogue.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


namespace Game {
	BellDialogue::BellDialogue()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::BellDialogue);
		m_dialogueComponent = static_cast<DialogueComponent*>(AddComponent<DialogueComponent>());
		m_dialogueComponent->setAnswer(true);
	}





}