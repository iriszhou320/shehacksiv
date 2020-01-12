#include "CollidablePhysicsComponent.h"
#include "Game\GameEntities\Bell.h"
#include "Game\GameEntities\Correct.h"
#include "GameEngine/Util/CollisionManager.h"
#include "GameEngine/EntitySystem/Entity.h"
#include "GameEngine\GameEngineMain.h"
#include <SFML/Window/Keyboard.hpp>

#include <vector>
#include <string>
#include <iostream>

using namespace GameEngine;

CollidablePhysicsComponent::CollidablePhysicsComponent()
{

}


CollidablePhysicsComponent::~CollidablePhysicsComponent()
{

}


void CollidablePhysicsComponent::OnAddToWorld()
{
	__super::OnAddToWorld();
}


void CollidablePhysicsComponent::OnRemoveFromWorld()
{
	__super::OnAddToWorld();
}


void CollidablePhysicsComponent::Update()
{
	//For the time being just a simple intersection check that moves the entity out of all potential intersect boxes
	std::vector<CollidableComponent*>& collidables = CollisionManager::GetInstance()->GetCollidables();

	for (int a = 0; a < collidables.size(); ++a)
	{
		CollidableComponent* colComponent = collidables[a];
		if (colComponent == this)
			continue;

		AABBRect intersection;
		AABBRect myBox = GetWorldAABB();
		AABBRect colideBox = colComponent->GetWorldAABB();
		if (myBox.intersects(colideBox, intersection))
		{
			if (colComponent->GetEntity()->GetEntityType() == EntityType::Bell) {
				std::cout << "test";
				GameEngineMain::GetInstance()->m_gameBoard->createBellDialogue();
				
			}

			if (colComponent->GetEntity()->GetEntityType() == EntityType::Google) {
				GameEngineMain::GetInstance()->m_gameBoard->createGoogleDialogue();
			}
			if (colComponent->GetEntity()->GetEntityType() == EntityType::UbiBooth) {
				GameEngineMain::GetInstance()->m_gameBoard->createUbiDialogue();
			}
			if (colComponent->GetEntity()->GetEntityType() == EntityType::Scotia) {
				GameEngineMain::GetInstance()->m_gameBoard->createScotiaDialogue();
			}
			sf::Vector2f pos = GetEntity()->GetPos();
			if (intersection.width < intersection.height)
			{
				if (myBox.left < colideBox.left)
					pos.x -= intersection.width;
				else
					pos.x += intersection.width;
			}
			else
			{
				if (myBox.top < colideBox.top)
					pos.y -= intersection.height;
				else
					pos.y += intersection.height;
			}

			GetEntity()->SetPos(pos);
			
		}
	}
}