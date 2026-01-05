#include "PheonApplication.h"
#include "PheonWidgets.h"

#include "Player.h"

class BreakoutProject : public Pheon::Application {
public:

	Application::Application;

	void Start() override {}

	void OnEvent(const SDL_Event& Event) override
	{
		if (Event.type == SDL_EVENT_WINDOW_RESIZED || Event.type == SDL_EVENT_WINDOW_SHOWN)
		{
			
		}

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
		player.Render();
	}

private:

	SDL_FRect ButtonRect{200,200,100,50};
	Pheon::Widgets::Button testtwo{ "Hello", ButtonRect,this };

	Player player{ this };
	
};

int main()
{
	TTF_Init();

	BreakoutProject BreakoutProject("Breakout", 600,900, SDL_WINDOW_RESIZABLE,"img/icon.bmp");
	BreakoutProject.InitLoop(20);

	TTF_Quit();
}