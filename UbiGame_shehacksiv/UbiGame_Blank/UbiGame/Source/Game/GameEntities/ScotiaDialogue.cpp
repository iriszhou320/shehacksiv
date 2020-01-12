#include "ScotiaDialogue.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


namespace Game {
	ScotiaDialogue::ScotiaDialogue()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::ScotiaDialogue);
		m_dialogueComponent = static_cast<DialogueComponent*>(AddComponent<DialogueComponent>());
		m_dialogueComponent->setAnswer(false);
	}





}