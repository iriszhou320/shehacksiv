#include "Google.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"


namespace Game {
	Google::Google()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::Google);
		AddComponent<GameEngine::CollidableComponent>();
	}



}





