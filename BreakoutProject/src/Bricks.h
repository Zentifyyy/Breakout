#pragma once
#include "Ball.h"
#include "PheonUtils.h"
#include "PheonApplication.h"

#include <vector>
#include <random>
#include <iostream>

class Bricks
{
public:

	Bricks(const Ball* ball, Pheon::Application* app): m_Ball(ball), m_Application(app) {};

	void Update() 
	{
		for (auto i{0}; i < m_Rects.size(); i++)
		{
			if (SDL_HasRectIntersectionFloat(&m_Rects[i], &m_Ball->m_Rect))
			{
				m_Rects.erase(m_Rects.begin() + i);
				std::cout << "ball hit something\n";
			}
			else
			{
				Pheon::Utils::SetRenderColour(m_Application->m_Renderer, Pheon::Colours::TextColour);
				SDL_RenderFillRect(m_Application->m_Renderer, &m_Rects.at(i));
			}
		}
	}

	bool RectCollisionCheck(const SDL_FRect& Rect1Pos, const SDL_FRect& Rect2Pos)
	{
		std::cout << Rect1Pos.x << ' ' << Rect1Pos.y << '\n';

		if (Rect1Pos.x > Rect2Pos.x && Rect1Pos.x + Rect1Pos.w < Rect2Pos.x + Rect2Pos.w)
		{
			if (Rect1Pos.y > Rect2Pos.y && Rect1Pos.y + Rect1Pos.h < Rect2Pos.y + Rect2Pos.h)
				return true;
			else
				return false;
		}

		return false;
	}

private:

	const Ball* m_Ball;

	Pheon::Application* m_Application;

	const Pheon::Vector2 rectSize{ 50,15 };
	std::vector<SDL_FRect> m_Rects
	{
		{130, 200, rectSize.x, rectSize.y}, {190, 200, rectSize.x, rectSize.y}, {250, 200, rectSize.x, rectSize.y},
		{310, 200, rectSize.x, rectSize.y}, {370, 200, rectSize.x, rectSize.y}, {430, 200, rectSize.x, rectSize.y},
		
		{130, 235, rectSize.x, rectSize.y}, {190, 235, rectSize.x, rectSize.y}, {250, 235, rectSize.x, rectSize.y},
		{310, 235, rectSize.x, rectSize.y}, {370, 235, rectSize.x, rectSize.y}, {430, 235, rectSize.x, rectSize.y},

		{130, 270, rectSize.x, rectSize.y}, {190, 270, rectSize.x, rectSize.y}, {250, 270, rectSize.x, rectSize.y},
		{310, 270, rectSize.x, rectSize.y}, {370, 270, rectSize.x, rectSize.y}, {430, 270, rectSize.x, rectSize.y},
	};

};