#pragma once
#include "GameEngine\EntitySystem\Component.h"
#


namespace Game
{
	class DialogueComponent : public GameEngine::Component
	{
	public:
		DialogueComponent();
		virtual ~DialogueComponent();

		virtual void Update() override;
		virtual void OnAddToWorld() override;

		bool isCorrect;
		bool answer;

		void setAnswer(bool value);



	};
}

void setAnswer(bool value);
