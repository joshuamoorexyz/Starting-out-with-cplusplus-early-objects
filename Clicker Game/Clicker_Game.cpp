
//clicker game

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

#include <SDL2/SDL.h>
void clean_up()
{
    //Free the image
    
    
    //Quit SDL
    SDL_Quit();    
}
int main (int argc, char** argv)
{
    SDL_Window* window = NULL;
    window = SDL_CreateWindow
    (
        "Life Clicker!", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        1280,
        800,
        SDL_WINDOW_SHOWN
    );

    
    // Setup renderer
    SDL_Renderer* renderer = NULL;
    renderer =  SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED);

    // Set render color to red ( background will be rendered in this color )
    SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );

    // Clear winow
    SDL_RenderClear( renderer );

    // Creat a rect at pos ( 50, 50 ) that's 50 pixels wide and 50 pixels high.
    SDL_Rect r;
    r.x = 150;
    r.y = 150;
    r.w = 150;
    r.h = 150;

    // Set render color to blue ( rect will be rendered in this color )
    SDL_SetRenderDrawColor( renderer, 0, 0, 255, 120 );

    // Render rect
    SDL_RenderFillRect( renderer, &r );

    // Render the rect to the screen
    SDL_RenderPresent(renderer);
 //If the user has Xed out the window
   
    // Wait for 5 sec
    SDL_Delay( 10000 );
   
    SDL_DestroyWindow(window);
    clean_up();
  

    return EXIT_SUCCESS;
}



 

   


