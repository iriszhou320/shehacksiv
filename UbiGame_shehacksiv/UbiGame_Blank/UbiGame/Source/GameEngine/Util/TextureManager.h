#pragma once
#include <vector>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>

namespace GameEngine
{
	//TODO - if needed, move out of Engine part to some sort of loader on the game side of things
	namespace eTexture
	{
		enum type
		{
			None = -1,
			Player = 0,
			UbiBooth,
			Google,
			Bell,
			Scotia,
			UbiDialogue,
			BellDialogue,
			ScotiaDialogue,
			GoogleDialogue,
			Wrong,
			Correct,
			Person1,
			Person2,
			Person3,
			Count,
       };
	}	

	inline const char* GetPath(eTexture::type texture)
	{
		switch (texture)
		{
	
		case GameEngine::eTexture::Scotia:
			return "scotiabank.png";
		case GameEngine::eTexture::Count:
			break;
		case GameEngine::eTexture::Player:
			return "Player.png";
		case GameEngine::eTexture::Person1:
			return "Person1.png";
		case GameEngine::eTexture::Person2:
			return "Person2.png";
		case GameEngine::eTexture::Person3:
			return "Person3.png";
		case GameEngine::eTexture::UbiBooth:
			return "Ubisoft.png";
		case GameEngine::eTexture::Google:
			return "GoogleCloud.png";
		case GameEngine::eTexture::Bell:
			return "Bell.png";
		case GameEngine::eTexture::UbiDialogue:
			return "Ubisoft_question.png";
		case GameEngine::eTexture::ScotiaDialogue:
			return "Scotiabank_question.png";
		case GameEngine::eTexture::BellDialogue:
			return "Bell_question.png";
		case GameEngine::eTexture::GoogleDialogue:
			return "Google_question.png";
		case GameEngine::eTexture::Correct:
			return "Correct.png";
		case GameEngine::eTexture::Wrong:
			return "Wrong.png";
		default:
			break;
		}
	}

	class TextureManager
	{
	public:
		static TextureManager* GetInstance() { if (!sm_instance) sm_instance = new TextureManager(); return sm_instance; }
		~TextureManager();

		void LoadTextures();
		void UnLoadTextures();

		sf::Texture* GetTexture(eTexture::type texture) const { return m_textures[(int)texture]; }

	private:
		TextureManager();
		static TextureManager* sm_instance;

		sf::Texture* m_textures[eTexture::Count];
	};
}

namespace TextureHelper
{
	static sf::Vector2f GetTextureTileSize(GameEngine::eTexture::type texture)
	{
		if (texture == GameEngine::eTexture::Player)
			return sf::Vector2f(18.f, 18.f);
	

		return sf::Vector2f(-1.f, -1.f);
	}
}

