#pragma once
#include "Ball.h"
#include <vector>

class Bricks
{
public:

	Bricks(Ball* ball, int& Score, Pheon::Application* app);

	void Update();

	void ResetBricks();

private:

	Ball* m_Ball;

	int& m_Score;

	Pheon::Application* m_Application;

	const Pheon::Vector2 rectSize{ 50,15 };
	const Pheon::Vector2 rectOffset{ 25,75 };

	const int m_NumRows{ 12 }, m_NumColums{ 4 };

	std::vector<SDL_FRect> m_Rects{};

};