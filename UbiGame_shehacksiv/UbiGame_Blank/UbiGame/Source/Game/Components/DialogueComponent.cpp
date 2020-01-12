#include "DialogueComponent.h"


#include "GameEngine\GameEngineMain.h"
#include "GameEngine\Util\TextureManager.h"
#include <SFML/Window/Keyboard.hpp>

using namespace Game;

DialogueComponent::DialogueComponent()
{

}

DialogueComponent::~DialogueComponent()
{

}

void DialogueComponent::OnAddToWorld()
{
	
}

void DialogueComponent::setAnswer(bool value) {
	answer = value;
	printf("true");
}


//each frame
void DialogueComponent::Update()
{
	__super::Update();

	if (GameEngine::GameEngineMain::GetInstance()->IsGameOver())
	{
		return;
	}


	bool isPressed = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		isPressed = true;
		isCorrect = true;
		if (isCorrect == answer && isPressed) {
			
			GameEngine::GameEngineMain::GetInstance()->m_gameBoard->createCorrect();
			isPressed = false;
		
		}
		
		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
	{
		isPressed = true;
		isCorrect = false;
		if (isCorrect == answer && isPressed) {

			GameEngine::GameEngineMain::GetInstance()->m_gameBoard->createCorrect();
			isPressed = false;

		}
		else {
			GameEngine::GameEngineMain::GetInstance()->m_gameBoard->createWrong();
		}
		
	}

	
	

		
	
}





