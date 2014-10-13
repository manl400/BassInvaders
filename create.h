#ifndef CREATE_H
#define CREATE_H

//////////////////
int x = 310, y = 440;
int movespeed = 7;
//////////////////
int lx = x + 5, ly = 430;

// all of these sould be put in this header for easy acess to names of SDL related things.

SDL_Window   *Win0;

SDL_Renderer *Ren0;

SDL_Surface  *Sur0;

SDL_Texture  *Tex0;


SDL_Event     Eve0;

// rects
SDL_Rect ShipA;
SDL_Rect ShipB;

//for Laser_Wpn.h (keep on bottem for now)
SDL_Rect LaserA;

#endif
