/*
    Bass Invaders
		By:
	Derek Slager
	Zain Ashraf
	

    Put your name on top if you programed last :)

	~ A Bassy Space Invaders 
	This really is just a porject for us to get started 
*/

#include <SDL.h>
#include <SDL_Image.h>
#include <SDL_ttf.h>
#include <iostream>
#include "create.h"
#include "sdl_init.h"
#include "destory.h"
#include "keyEvents.h"

using namespace std;


int main(int argc, char *argv[])
{
	INIT_EVERYTHING();
	
	//for frame rate.
	const int FPS=60;
	Uint32 FPS_A;
	
	////testing////
		SDL_Rect ShipA;
		SDL_Rect ShipB;
	
	////testing////
	
	// game loop
	while(!quit)
	{
		//SDL_PollEvent(&Eve0);
	    FPS_A = SDL_GetTicks();
		
		//SDL_WaitEvent(&Eve0);
		
		
		Key_Presses();
		

		////////////////////////
		
		
		//SDL_FillRect(Sur0, &Sur0->clip_rect, SDL_MapRGB(Sur0->format, 0xff,0xff,0xff));
		//SDL_FillRect(Sur0, &test, SDL_MapRGB(Sur0->format, 0,0,0));
		//SDL_Flip(Sur0);
		
		SDL_SetRenderDrawColor( Ren0, 0, 0, 0, 255 );
		
		SDL_RenderClear(Ren0);
		
		SDL_SetRenderDrawColor( Ren0, 255, 255, 255, 255 );
		
		ShipA.x = x;
		ShipA.y = y;
		ShipA.w = 20;
		ShipA.h = 10;
		
		ShipB.x = (5+x);
		ShipB.y = y-7;
		ShipB.w = 10;
		ShipB.h = 10;
		
		
		SDL_RenderFillRect(Ren0, &ShipA);
		SDL_RenderFillRect(Ren0, &ShipB);
		
		SDL_RenderPresent(Ren0);
		////////////////////////
		
		 //if it is over the frame rate it will delay game. this must say at the end of the loop.
		 if(1000/FPS > SDL_GetTicks() - FPS_A)
			SDL_Delay(1000/FPS - (SDL_GetTicks() - FPS_A));
	}
	
	return 0;
}
