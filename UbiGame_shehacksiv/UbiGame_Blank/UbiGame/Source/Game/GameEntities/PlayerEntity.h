#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEngine\EntitySystem\Components\AnimationComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "Game\Components\PlayerMovementComponent.h"
#include "GameEngine\EntitySystem\Components\CollidablePhysicsComponent.h"


namespace Game
{

	class PlayerEntity : public GameEngine::Entity
	{
	public:
		PlayerEntity();
		~PlayerEntity() = default;

		// virtual void OnAddToWorld() override;
		// virtual void OnRemoveFromWorld() override;
		/*
		void RerenderPlayer(int z);*/

	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
		PlayerMovementComponent*	 m_playerMovementComponent;
		GameEngine::AnimationComponent* m_animComponent;
		GameEngine::CollidablePhysicsComponent* m_collideComponent;

	};
}
