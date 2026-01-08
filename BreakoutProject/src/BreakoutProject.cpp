#include "PheonApplication.h"
#include "PheonWidgets.h"

#include "Player.h"

class BreakoutProject : public Pheon::Application {
public:

	Application::Application;

	void Start() override {}

	void OnEvent(const SDL_Event& Event) override
	{
		if (!Event.key.down) return;

		if (Event.key.key == SDLK_A) {
			player.Translate(-10);
		}
		if (Event.key.key == SDLK_D) {
			player.Translate(10);
		}
	}

	void Update() override
	{
		if (ExitButton)
			CloseWindow();

		player.Render();
	}

private:

	SDL_FRect ButtonRect{ 650,840,100,50 };
	Pheon::Widgets::Button ExitButton{ "Exit", ButtonRect,this };

	Player player{ this };
	
};

int main()
{
	TTF_Init();

	BreakoutProject BreakoutProject("Breakout", 760,900, SDL_WINDOW_RESIZABLE,"img/icon.bmp");
	BreakoutProject.InitLoop(60);

	TTF_Quit();
}