#include "Ball.h"

Ball::Ball(Pheon::Application* Application)
	: m_Application(Application) {}

void Ball::Update()
{
	if (Position.x > (600 - m_Rect.w) || Position.x < 0)
		Velocity.x *= -1;

	Position.x += Velocity.x * 5;
	Position.y += Velocity.y * 5;

	m_Rect = { Position.x, Position.y,5,5 };

	Pheon::Utils::SetRenderColour(m_Application->m_Renderer, BallColour);
	SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
}