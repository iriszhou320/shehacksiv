#pragma once
#include "GameEngine\EntitySystem\Component.h"
#include "GameEngine\EntitySystem\Components\AnimationComponent.h"


namespace Game
{
	class PlayerMovementComponent : public GameEngine::Component
	{
	public:
		PlayerMovementComponent();
		virtual ~PlayerMovementComponent();

		virtual void Update() override;
		virtual void OnAddToWorld() override;

	private:
		GameEngine::AnimationComponent* m_animComponent;
	};
}