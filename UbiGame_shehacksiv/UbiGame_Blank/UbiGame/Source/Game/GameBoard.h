#pragma once
#include "GameEngine\EntitySystem\Entity.h"
#include "GameEntities\UbiBooth.h"
#include "GameEntities\Google.h"
#include "GameEntities\Bell.h"
#include "GameEntities\Correct.h"
#include "GameEntities\UbiDialogue.h"
#include "GameEntities\PlayerEntity.h"
#include "GameEntities\Scotia.h"
#include "GameEntities\BellDialogue.h"
#include "GameEntities\ScotiaDialogue.h"
#include "GameEntities\UbiDialogue.h"
#include "GameEntities\GoogleDialogue.h"
#include "GameEntities\Person1.h"
#include "GameEntities\Person2.h"
#include "GameEntities\Person3.h"
#include "GameEntities\Wrong.h"
#include <SFML/System/Vector2.hpp>
#include <vector>

namespace Game
{
	//Used for storing and controling all game related entities, as well as providing an entry point for the "game" side of application	
	class PlayerEntity;	

	class GameBoard
	{
	public:
		GameBoard();
		virtual ~GameBoard();

		bool  m_isGameOver;
		void Update();		
		bool IsGameOver() const { return m_isGameOver; }
		PlayerEntity* m_player;
		GameEngine::Entity* m_backGround;
		UbiBooth* m_ubibooth;
		Google* m_google;
		Bell* m_bell;
		Correct* m_correct;
		Wrong* m_wrong;
		Scotia* m_scotia;
		BellDialogue* m_bellDialogue;
		ScotiaDialogue* m_scotiaDialogue;
		UbiDialogue* m_ubiDialogue;
		GoogleDialogue* m_googleDialogue;
		Person1* m_person1;
		Person2* m_person2;
		Person3* m_person3;



		//void createText();
		void createCorrect();
		void createWrong();
		void createBellDialogue();
		void createScotiaDialogue();
		void createUbiDialogue();
		void createGoogleDialogue();
		void hideBellDialogue();





	private:
		void CreatePlayer();
		void CreateObstacle();
	
	};
}

