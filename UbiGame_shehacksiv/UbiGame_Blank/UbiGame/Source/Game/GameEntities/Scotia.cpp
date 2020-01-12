#include "Scotia.h"

#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"


namespace Game {
	Scotia::Scotia()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::Scotia);
		AddComponent<GameEngine::CollidableComponent>();
	}



}
