#include "PlayerEntity.h"
#include "GameEngine/Util/AnimationManager.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"

#include "GameEngine\EntitySystem\Components\CollidablePhysicsComponent.h"

using namespace Game;


PlayerEntity::PlayerEntity() {
	//movement
	m_playerMovementComponent = static_cast<PlayerMovementComponent*>(AddComponent<PlayerMovementComponent>());

	//render
	GameEngine::SpriteRenderComponent* spriteCMp = static_cast<GameEngine::SpriteRenderComponent*>(AddComponent<GameEngine::SpriteRenderComponent>());
	spriteCMp->SetTexture(GameEngine::eTexture::Player);

	//Animation
	m_animComponent = static_cast<GameEngine::AnimationComponent*>(AddComponent<GameEngine::AnimationComponent>());

	//collide
	m_collideComponent = static_cast<GameEngine::CollidablePhysicsComponent*>(AddComponent<GameEngine::CollidablePhysicsComponent>());

	
}