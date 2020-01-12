#include "Person2.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


using namespace Game;
Person2::Person2()
{
	//render
	GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
	spriteCMp->SetTexture(GameEngine::eTexture::Person2);
}