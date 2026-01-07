#include "Bricks.h"

Bricks::Bricks(const Ball* ball, int& Score, Pheon::Application* app) 
	: m_Ball(ball), m_Application(app), m_Score(Score){}

void Bricks::Update()
{
	for (auto i{ 0 }; i < m_Rects.size(); i++)
	{
		if (SDL_HasRectIntersectionFloat(&m_Rects[i], &m_Ball->m_Rect))
		{
			m_Score += 100;
			m_Rects.erase(m_Rects.begin() + i);
		}
		else
		{
			Pheon::Utils::SetRenderColour(m_Application->m_Renderer, Pheon::Colours::TextColour);
			SDL_RenderFillRect(m_Application->m_Renderer, &m_Rects.at(i));
		}
	}
}