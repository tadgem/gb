#include "gb_sdl_renderer.h"

SDLRendererData gb_sdl_renderer::init(uint16_t w, uint16_t h)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDLRendererData data;
	SDL_CreateWindowAndRenderer(w, h, SDL_WINDOW_ALWAYS_ON_TOP, &data.m_Window, &data.m_Renderer);
	return data;
}

void gb_sdl_renderer::cleanup(SDLRendererData& data)
{
	SDL_DestroyRenderer(data.m_Renderer);
	SDL_DestroyWindow(data.m_Window);
}

bool gb_sdl_renderer::render(SDLRendererData& data, DMG& dmg)
{
	bool quit = false;
	while (!quit)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
				case SDL_EVENT_QUIT:
					quit = true;
			}
		}
	}
	return false;
}
