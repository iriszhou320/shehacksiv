#include "GoogleDialogue.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


namespace Game {
	GoogleDialogue::GoogleDialogue()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::GoogleDialogue);
		m_dialogueComponent = static_cast<DialogueComponent*>(AddComponent<DialogueComponent>());
		m_dialogueComponent->setAnswer(true);
	}
}
