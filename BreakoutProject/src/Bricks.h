#pragma once
#include "Ball.h"
#include <vector>

class Bricks
{
public:

	Bricks(Ball* ball, int& Score, Pheon::Application* app);

	void Update();

private:

	Ball* m_Ball;

	int& m_Score;

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