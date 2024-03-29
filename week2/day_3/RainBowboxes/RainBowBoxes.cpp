#include "draw.h"
#include <stdlib.h>
#include <vector>

void rainbow(SDL_Renderer *gRenderer, int x, int y);

void draw(SDL_Renderer *gRenderer)
{
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with a rainbow of colored squares.
    std::vector<std::vector<int>> colors = {
            {148, 0,   211, 255}, //violet
            {75,  0,   130, 255}, //indigo
            {0,   0,   255, 255},
            {0,   255, 0,   255}, //Blue
            {255, 255, 0,   255}, //yellow
            {255, 127, 0,   255}, // Orange
            {255, 0,   0,   255} //red
    };
    int x = 0;
    int y = 0;
    for (int i = 0; i < 13; ++i) {
        for (int j = 0; j < 7; ++j) {
            SDL_SetRenderDrawColor(gRenderer, colors[j][0], colors[j][1], colors[j][2], colors[j][3]);

            rainbow(gRenderer, x + i * 69, y + j * 69);
        }

//SDL_SetRenderDrawColor(gRenderer, (rand()%256),(rand()%256),(rand()%256),255);
    }
}

void rainbow(SDL_Renderer *gRenderer, int x, int y)
{

    SDL_Rect rainBowBox = {x, y, 69, 69};
    SDL_RenderDrawRect(gRenderer, &rainBowBox);
    SDL_RenderFillRect(gRenderer, &rainBowBox);
}
