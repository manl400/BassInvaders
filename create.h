#ifndef CREATE_H
#define CREATE_H

//////////////////
int x = 310, y = 440;
int movespeed = 7;
bool LAZER, particlesA = true;
int temp_loc;
int px[7], py[7]; // need to find a way to not make these globals
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

//for praticals
SDL_Rect PARTA;
SDL_Rect PARTB;
SDL_Rect PARTC;
SDL_Rect PARTD;
SDL_Rect PARTE;
SDL_Rect PARTF;
SDL_Rect PARTG;

//for Laser_Wpn.h (keep on bottem for now)
SDL_Rect LaserA;

#endif
