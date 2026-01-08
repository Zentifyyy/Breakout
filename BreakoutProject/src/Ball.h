#pragma once
#include "PheonUtils.h"
#include "PheonApplication.h"

class Ball
{
public:

	Ball(Pheon::Application* Application);
		
	void Update();

	Pheon::Vector2 Position{ 10, 10 };
	
	Pheon::Vector2 Velocity{ 1,-1 };
	
	SDL_FRect m_Rect{ 0,0,10,10 };

private:

	const SDL_Color BallColour{ 255,255,255,255 };

	Pheon::Application* m_Application;

	float m_Speed = 3;
};

