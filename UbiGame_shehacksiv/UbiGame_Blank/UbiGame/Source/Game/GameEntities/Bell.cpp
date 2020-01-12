#include "Bell.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"


namespace Game {
	Bell::Bell()
	{
		//render
		GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
		spriteCMp->SetTexture(GameEngine::eTexture::Bell);
		SetEntityType(GameEngine::EntityType::Bell);
		AddComponent<GameEngine::CollidableComponent>();
	}



}