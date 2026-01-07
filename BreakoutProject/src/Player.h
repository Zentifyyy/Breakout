#pragma once
#include "Ball.h"
#include "Bricks.h"

#include "PheonWidgets.h"

#include <string>

class Player
{
public:

	Player(Pheon::Application* App)
		: m_Application(App)
	{
		m_Rect.y = 900 - (m_Rect.h + 200);
		m_Rect.x = 300 - (m_Rect.w / 2);
	}

	void Render() 
	{
		if (HasBallBeenShot) 
		{
			ball.Update();
		}

		bricks.Update();

		m_Score.UpdateText(std::to_string(Score).c_str());

		Pheon::Utils::SetRenderColour(m_Application->m_Renderer,PlayerColour);
		SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
	}

	void Translate(int x) 
	{
		if (!HasBallBeenShot) 
		{
			ball.Position = { m_Rect.x + (m_Rect.w / 2), m_Rect.y - 10 };
			ball.Velocity.x = x * 0.1f;
			HasBallBeenShot = true;
		}

		if (m_Rect.x >= 0 && m_Rect.x <= 600 - m_Rect.w) 
		{
			m_Rect.x += x;
		}
		else if (m_Rect.x <= 0) 
		{
			m_Rect.x = 0;
		}
		else if (m_Rect.y >= 600 - m_Rect.w) 
		{
			m_Rect.x = 600 - m_Rect.w;
		}
	}

private:
	
	Pheon::Application* m_Application;

	int Score{};

	const char* m_ScoreText = "Score: 0";
	Pheon::Vector2 m_ScorePos{10,10};
	Pheon::Widgets::Label m_Score{ m_ScoreText, &m_ScorePos, 0.5f, m_Application };

	Ball ball{ m_Application };
	Bricks bricks{ &ball, Score ,m_Application };

	bool HasBallBeenShot = false;
	
	SDL_FRect m_Rect{ 10, 10, 40, 15 };
	const SDL_Color PlayerColour{ 50, 225, 255, 255 };
};

