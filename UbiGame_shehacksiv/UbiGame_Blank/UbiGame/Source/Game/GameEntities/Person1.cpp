#include "Person1.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"


using namespace Game;
Person1::Person1()
{
	//render
	GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
	spriteCMp->SetTexture(GameEngine::eTexture::Person1);
}


