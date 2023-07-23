#include <iostream>
#include "gb.h"
#include "gb_sdl_renderer.h"

int main()
{
    using namespace std;

    cout << "Hello\n";

    auto data = gb_sdl_renderer::init(240, 144);

    while (gb_sdl_renderer::render(data))
    {

    }

    gb_sdl_renderer::cleanup(data);

    return 0;
}