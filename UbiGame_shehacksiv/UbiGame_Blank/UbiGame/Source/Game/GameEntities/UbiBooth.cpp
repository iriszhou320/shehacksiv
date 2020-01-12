#include "UbiBooth.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


namespace Game {
	UbiBooth::UbiBooth()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::UbiBooth);
		AddComponent<GameEngine::CollidableComponent>();
	}



}

