#include "Correct.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"


namespace Game {
	Correct::Correct()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::Correct);
	}



}
