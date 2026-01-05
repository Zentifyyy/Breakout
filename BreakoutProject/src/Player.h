#pragma once
#include "Ball.h"

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

		Pheon::Utils::SetRenderColour(m_Application->m_Renderer,PlayerColour);
		SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
	}

	void Translate(int x) 
	{
		if (!HasBallBeenShot) 
		{
			ball.Position = { m_Rect.x + (m_Rect.w / 2), m_Rect.y - 10 };
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

private:
	
	Pheon::Application* m_Application;

	Ball ball{ m_Application };

	bool HasBallBeenShot = false;
	
	SDL_FRect m_Rect{ 10, 10, 40, 15 };
	const SDL_Color PlayerColour{ 50, 225, 255, 255 };
};

