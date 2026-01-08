#include "Bricks.h"
#include <iostream>

Bricks::Bricks(Ball* ball, int& Score, Pheon::Application* app) 
	: m_Ball(ball), m_Application(app), m_Score(Score){}

void Bricks::Update()
{
	for (auto i{ 0 }; i < m_Rects.size(); i++)
	{
		if (SDL_HasRectIntersectionFloat(&m_Rects[i], &m_Ball->m_Rect))
		{
			m_Score += 100;
			m_Rects.erase(m_Rects.begin() + i);

			if (m_Ball->Position.y == 215 || m_Ball->Position.y == 250 || m_Ball->Position.y == 285) 
			{
				m_Ball->Velocity.y *= -1;
			}
			else 
			{
				m_Ball->Velocity.x *= -1;
			}

			std::cout << m_Ball->Position.x << ' ';
			std::cout << m_Ball->Position.y << '\n';
		}
		else
		{
			Pheon::Utils::SetRenderColour(m_Application->m_Renderer, Pheon::Colours::TextColour);
			SDL_RenderFillRect(m_Application->m_Renderer, &m_Rects.at(i));
		}
	}
}