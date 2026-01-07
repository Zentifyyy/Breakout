#pragma once
#include "SDL3/SDL.h"
#include "PheonUtils.h"
#include "PheonApplication.h"
#include "PheonWidgets.h"

class Ball
{
public:

	Ball(Pheon::Application* Application)
	: m_Application(Application){}
		
	void Update() 
	{
		if (Position.x > (600 - m_Rect.w) || Position.x < 0)
			Velocity.x *= -1;

		Position.x += Velocity.x * 5;
		Position.y += Velocity.y * 5;

		m_Rect = { Position.x, Position.y,5,5 };

		Pheon::Utils::SetRenderColour(m_Application->m_Renderer, BallColour);
		SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
	}

	Pheon::Vector2 Position{ 10, 10 };
	
	Pheon::Vector2 Velocity{ 1,-1 };
	
	SDL_FRect m_Rect{ 0,0,10,10 };

private:

	const SDL_Color BallColour{ 255,255,255,255 };

	Pheon::Application* m_Application;

};

