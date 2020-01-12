#include "Person3.h"

#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


using namespace Game;
Person3::Person3()
{
	//render
	GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
	spriteCMp->SetTexture(GameEngine::eTexture::Person3);
}
