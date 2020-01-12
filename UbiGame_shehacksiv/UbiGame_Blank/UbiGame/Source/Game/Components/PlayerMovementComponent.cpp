#include "PlayerMovementComponent.h"

#include "GameEngine\GameEngineMain.h"
#include "GameEngine\Util\TextureManager.h"
#include "GameEngine\Util\AnimationManager.h"
#include <SFML/Window/Keyboard.hpp>

using namespace Game;

PlayerMovementComponent:: PlayerMovementComponent()
	:m_animComponent(nullptr)
{
	 
}

PlayerMovementComponent::~PlayerMovementComponent()
{

}

void PlayerMovementComponent::OnAddToWorld()
{
	m_animComponent = GetEntity()->GetComponent<GameEngine::AnimationComponent>();
}

//each frame
void PlayerMovementComponent::Update()
{
	__super::Update();

	if (GameEngine::GameEngineMain::GetInstance()->IsGameOver())
	{
		return;
	}

	float dt = GameEngine::GameEngineMain::GetTimeDelta();
	static float playerVel = 150.f; //Pix

	sf::Vector2f wantedVel = sf::Vector2f(0.f, 0.f);
	bool wantsToFly = false;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		wantedVel.x -= playerVel * dt;

		if (m_animComponent)
		{
			if (m_animComponent->GetCurrentAnimation() != GameEngine::EAnimationId::WalkLeft)
			{
				m_animComponent->PlayAnim(GameEngine::EAnimationId::WalkLeft);
			}
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		wantedVel.x += playerVel * dt;

		if (m_animComponent)
		{
			if (m_animComponent->GetCurrentAnimation() != GameEngine::EAnimationId::WalkRight)
			{
				m_animComponent->PlayAnim(GameEngine::EAnimationId::WalkRight);
			}
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		wantedVel.y -= playerVel * dt;

		if (m_animComponent)
		{
			if (m_animComponent->GetCurrentAnimation() != GameEngine::EAnimationId::WalkBack)
			{
				m_animComponent->PlayAnim(GameEngine::EAnimationId::WalkBack);
			}
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		wantedVel.y += playerVel * dt;

		if (m_animComponent)
		{
			if (m_animComponent->GetCurrentAnimation() != GameEngine::EAnimationId::WalkFront)
			{
				m_animComponent->PlayAnim(GameEngine::EAnimationId::WalkFront);
			}
		}
	}


	GetEntity()->SetPos(GetEntity()->GetPos() + wantedVel);

	if (wantedVel == sf::Vector2f(0.f, 0.f))
	{
		if (m_animComponent)
		{
			if (m_animComponent->GetCurrentAnimation() != GameEngine::EAnimationId::PlayerIdle)
			{
				m_animComponent->PlayAnim(GameEngine::EAnimationId::PlayerIdle);
			}
		}
	}
}





