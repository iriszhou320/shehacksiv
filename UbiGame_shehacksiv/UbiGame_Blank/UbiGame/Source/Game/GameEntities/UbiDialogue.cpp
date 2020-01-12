#include "UbiDialogue.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


namespace Game {
	UbiDialogue::UbiDialogue()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::UbiDialogue);
		m_dialogueComponent = static_cast<DialogueComponent*>(AddComponent<DialogueComponent>());
		m_dialogueComponent->setAnswer(true);
	}





}