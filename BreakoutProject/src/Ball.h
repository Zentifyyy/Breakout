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
		Position.x += Velocity.x;
		Position.y += Velocity.y;

		m_Rect = { Position.x, Position.y,5,5 };

		Pheon::Utils::SetRenderColour(m_Application->m_Renderer,BallColour);
		SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
	}

	Pheon::Vector2 Position{ 10, 10 };

private:

	const SDL_Color BallColour{ 255,255,255,255 };

	Pheon::Vector2 Velocity{ 0,-1 };

	SDL_FRect m_Rect{ 0,0,10,10 };

	Pheon::Application* m_Application;

};

