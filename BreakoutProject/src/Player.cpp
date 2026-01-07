#include "Player.h"

Player::Player(Pheon::Application* App)
	: m_Application(App)
{
	m_Rect.y = 900 - (m_Rect.h + 200);
	m_Rect.x = 300 - (m_Rect.w / 2);
}

void Player::Render() 
{
	if (HasBallBeenShot)
	{
		ball.Update();
	}

	bricks.Update();

	m_Score.UpdateText(std::to_string(Score).c_str());

	Pheon::Utils::SetRenderColour(m_Application->m_Renderer, PlayerColour);
	SDL_RenderFillRect(m_Application->m_Renderer, &m_Rect);
}

void Player::Translate(int x) 
{
	if (!HasBallBeenShot)
	{
		ball.Position = { m_Rect.x + (m_Rect.w / 2), m_Rect.y - 10 };
		ball.Velocity.x = x * 0.1f;
		HasBallBeenShot = true;
	}

	if (m_Rect.x >= 0 && m_Rect.x <= 600 - m_Rect.w)
	{
		m_Rect.x += x;
	}
	else if (m_Rect.x <= 0)
	{
		m_Rect.x = 0;
	}
	else if (m_Rect.y >= 600 - m_Rect.w)
	{
		m_Rect.x = 600 - m_Rect.w;
	}
}