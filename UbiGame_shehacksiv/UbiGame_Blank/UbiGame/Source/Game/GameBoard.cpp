#include "GameBoard.h"

#include "GameEngine\GameEngineMain.h"
#include "GameEngine\EntitySystem\Components\CollidableComponent.h"
#include "GameEngine\EntitySystem\Components\SpriteRenderComponent.h"
#include "GameEngine\Util\TextureManager.h"
#include "GameEngine\Util\CollisionManager.h"
#include "Game\GameEntities\ObstacleEntity.h"
#include "GameEntities\PlayerEntity.h"
#include "GameEntities\UbiBooth.h"
#include "GameEntities\Google.h"
#include "GameEntities\Correct.h"
#include "GameEntities\Bell.h"
#include "GameEntities\Scotia.h"
#include "GameEntities\BellDialogue.h"
#include "GameEntities\GoogleDialogue.h"
#include "GameEntities\ScotiaDialogue.h"
#include "GameEntities\UbiDialogue.h"
#include "GameEntities\Person2.h"
#include "GameEntities\Person3.h"
#include "GameEntities\Person1.h"


#include <string>

using namespace Game;

GameBoard::GameBoard()
	: m_player(nullptr)
	, m_person1(nullptr)
	, m_person2(nullptr)
	, m_person3(nullptr)
	, m_google(nullptr)
	, m_bell(nullptr)
	, m_ubibooth(nullptr)
	, m_isGameOver(false)
	, m_backGround(nullptr)
	, m_correct(nullptr)
	, m_scotia(nullptr)
{
		m_player = new PlayerEntity();
		m_player->SetEntityType(GameEngine::EntityType::Player);
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_player);
		m_player->SetPos(sf::Vector2f(250.f, 200.f));
		m_player->SetSize(sf::Vector2f(40.f, 40.f));

		m_person1 = new Person1();
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_person1);
		m_person1->SetPos(sf::Vector2f(400.f, 200.f));
		m_person1->SetSize(sf::Vector2f(40.f, 40.f));

		m_person2 = new Person2();
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_person2);
		m_person2->SetPos(sf::Vector2f(550.f, 400.f));
		m_person2->SetSize(sf::Vector2f(40.f, 40.f));


		m_person3 = new Person3();
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_person3);
		m_person3->SetPos(sf::Vector2f(550.f, 700.f));
		m_person3->SetSize(sf::Vector2f(40.f, 40.f));

		m_ubibooth = new UbiBooth();
		m_ubibooth->SetEntityType(GameEngine::EntityType::UbiBooth);
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_ubibooth);
		m_ubibooth->SetPos(sf::Vector2f(900.f, 700.f));
		m_ubibooth->SetSize(sf::Vector2f(180.f, 120.f));

		m_google= new Google();
		m_google->SetEntityType(GameEngine::EntityType::Google);
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_google);
		m_google->SetPos(sf::Vector2f(900.f, 120.f));
		m_google->SetSize(sf::Vector2f(180.f, 160.f));
		//createText();

		m_bell = new Bell();
		m_bell->SetEntityType(GameEngine::EntityType::Bell);
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_bell);
		m_bell->SetPos(sf::Vector2f(120.f, 700.f));
		m_bell->SetSize(sf::Vector2f(120.f, 120.f));

		m_scotia = new Scotia();
		m_scotia->SetEntityType(GameEngine::EntityType::Scotia);
		GameEngine::GameEngineMain::GetInstance()->AddEntity(m_scotia);
		m_scotia->SetPos(sf::Vector2f(120.f, 120.f));
		m_scotia->SetSize(sf::Vector2f(120.f, 120.f));


		

}


GameBoard::~GameBoard()
{

}


void GameBoard::Update()
{	
	
}

/*void GameBoard::createText() {
	GameEngine::Entity* text = new GameEngine::Entity();
	Game
}*/

void GameBoard::createCorrect() {
	m_correct = new Correct();
	m_correct->SetEntityType(GameEngine::EntityType::Correct);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_correct);
	m_correct->SetPos(sf::Vector2f(600.f, 350.f));
	m_correct->SetSize(sf::Vector2f(240.f, 300.f));
}

void GameBoard::createBellDialogue() {
	m_bellDialogue = new BellDialogue();
	m_bellDialogue->SetEntityType(GameEngine::EntityType::BellDialogue);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_bellDialogue);
	m_bellDialogue->SetPos(sf::Vector2f(200.f, 650.f));
	m_bellDialogue->SetSize(sf::Vector2f(400.f, 400.f));
}

void GameBoard::hideBellDialogue() {
	GameEngine::GameEngineMain::GetInstance()->RemoveEntity(m_bellDialogue);
}

void GameBoard::createScotiaDialogue() {
	m_scotiaDialogue = new ScotiaDialogue();
	m_scotiaDialogue->SetEntityType(GameEngine::EntityType::ScotiaDialogue);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_scotiaDialogue);
	m_scotiaDialogue->SetPos(sf::Vector2f(250.f, 200.f));
	m_scotiaDialogue->SetSize(sf::Vector2f(400.f, 400.f));
}

void GameBoard::createUbiDialogue() {
	m_ubiDialogue = new UbiDialogue();
	m_ubiDialogue->SetEntityType(GameEngine::EntityType::UbiDialogue);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_ubiDialogue);
	m_ubiDialogue->SetPos(sf::Vector2f(700.f, 650.f));
	m_ubiDialogue->SetSize(sf::Vector2f(400.f, 400.f));
}

void GameBoard::createGoogleDialogue() {
	m_googleDialogue = new GoogleDialogue();
	m_googleDialogue->SetEntityType(GameEngine::EntityType::GoogleDialogue);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_googleDialogue);
	m_googleDialogue->SetPos(sf::Vector2f(750.f, 250.f));
	m_googleDialogue->SetSize(sf::Vector2f(500.f, 500.f));
}

void GameBoard::createWrong() {
	m_wrong = new Wrong();
	m_wrong->SetEntityType(GameEngine::EntityType::Wrong);
	GameEngine::GameEngineMain::GetInstance()->AddEntity(m_wrong);
	m_wrong->SetPos(sf::Vector2f(600.f, 350.f));
	m_wrong->SetSize(sf::Vector2f(280.f, 280.f));
}
