#ifndef CREATE_H
#define CREATE_H


//////////////////
int x = 310, y = 440;
int movespeed = 7;
bool LAZER, particlesA = true;
int temp_loc;
int px[7], py[7]; // need to find a way to not make these globals
int BSAx[15], BSAy[20];
bool BSAA[16];
int BSBx[16], BSBy[20];
bool BSBA[16];
int BSCx[16], BSCy[20];
bool BSCA[16];
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
// bad ships are in there own header
	SDL_Rect BSA1;
	SDL_Rect BSB1;
	SDL_Rect BSC1;
	
	SDL_Rect BSA2;
	SDL_Rect BSB2;
	SDL_Rect BSC2;
	
	SDL_Rect BSA3;
	SDL_Rect BSB3;
	SDL_Rect BSC3;
	
	SDL_Rect BSA4;
	SDL_Rect BSB4;
	SDL_Rect BSC4;
	
	SDL_Rect BSA5;
	SDL_Rect BSB5;
	SDL_Rect BSC5;
	
	SDL_Rect BSA6;
	SDL_Rect BSB6;
	SDL_Rect BSC6;
	
	SDL_Rect BSA7;
	SDL_Rect BSB7;
	SDL_Rect BSC7;
	
	SDL_Rect BSA8;
	SDL_Rect BSB8;
	SDL_Rect BSC8;
	
	SDL_Rect BSA9;
	SDL_Rect BSB9;
	SDL_Rect BSC9;
	
	SDL_Rect BSA10;
	SDL_Rect BSB10;
	SDL_Rect BSC10;
	
	SDL_Rect BSA11;
	SDL_Rect BSB11;
	SDL_Rect BSC11;
	
	SDL_Rect BSA12;
	SDL_Rect BSB12;
	SDL_Rect BSC12;
	
	SDL_Rect BSA13;
	SDL_Rect BSB13;
	SDL_Rect BSC13;
	
	SDL_Rect BSA14;
	SDL_Rect BSB14;
	SDL_Rect BSC14;
	
	SDL_Rect BSA15;
	SDL_Rect BSB15;
	SDL_Rect BSC15;

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
