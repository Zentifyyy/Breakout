#include "Ball.h"

Ball::Ball(Pheon::Application* Application)
	: m_Application(Application) {}

void Ball::Update()
{
	if (Position.x > (760 - m_Rect.w) || Position.x < 0)
		Velocity.x *= -1;
	else if (Position.y <= 0)
		Velocity.y *= -1;

	Position.x += Velocity.x * m_Speed;
	Position.y += Velocity.y * m_Speed;
	m_Speed += 0.001f;

	m_Rect = { Position.x, Position.y,5,5 };

	Pheon::Utils::SetRenderColour(m_Application->m_Renderer, BallColour);
	SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
}