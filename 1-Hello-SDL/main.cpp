/**
  _   _        _  _          ____   ____   _
 | | | |  ___ | || |  ___   / ___| |  _ \ | |
 | |_| | / _ \| || | / _ \  \___ \ | | | || |
 |  _  ||  __/| || || (_) |  ___) || |_| || |___
 |_| |_| \___||_||_| \___/  |____/ |____/ |_____|
 
 Let's create a blank SDL window with SDL 2.0
 
 **/

#include "SDL.h"


int main(int argc, char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;
    
    SDL_Event event;
    bool quit = false;
    
    //Init SDL
    if(SDL_Init(SDL_INIT_VIDEO)) {
        return 1;
    }
    
    //Create our window and renderer.
    window = SDL_CreateWindow("Hello SDL!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              640, 480, SDL_WINDOW_SHOWN);
    
    renderer = SDL_CreateRenderer(window, -1, 0);
    
    //Set the draw color, clear the screen, then display to the window.
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    
    SDL_RenderClear(renderer);
    
    SDL_RenderPresent(renderer);
    
    //Main Loop. Exit by pressing any key, or hitting the close button.
    while (!quit) {
        SDL_PollEvent(&event);
        
        if((event.type == SDL_KEYDOWN) || (event.type == SDL_QUIT)) {
            quit = true;
        }
    }
    
    //Clean up when done
    SDL_Quit();
    
    return 0;
}
