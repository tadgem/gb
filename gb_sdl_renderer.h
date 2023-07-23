
#pragma once

#include "SDL3/SDL.h"
#include "cstdio"
#include "gb.h"

struct SDLRendererData
{
	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;
};

namespace gb_sdl_renderer
{

	SDLRendererData init(uint16_t w, uint16_t h);
	void			cleanup(SDLRendererData& data);
	bool			render(SDLRendererData& data, DMG& dmg);
};