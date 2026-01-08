#pragma once
#include "Ball.h"
#include "Bricks.h"

#include "PheonWidgets.h"
#include <string>

class Player
{
public:

	Player(Pheon::Application* App);

	void Render();

	void Translate(int x);

	void RestartGame();

private:
	
	Pheon::Application* m_Application;

	int Score{};

	Pheon::Vector2 m_ScorePos{10,10};
	Pheon::Widgets::Label m_Score{ "0", &m_ScorePos, 0.5f, m_Application };

	Ball ball{ m_Application };
	Bricks bricks{ &ball, Score ,m_Application };

	bool HasBallBeenShot = false;
	
	SDL_FRect m_Rect{ 10, 10, 40, 15 };
	const SDL_Color PlayerColour{ 50, 225, 255, 255 };
};

