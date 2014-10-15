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
////
#include "z_testheader.h"
////
#include "create.h"
#include "BadShips.h"
#include "sdl_init.h"
#include "Laser_Wpn.h"
#include "keyEvents.h"
#include "Rendering.h"
#include "Rect_Update.h"
#include "destory.h"


using namespace std;


int main(int argc, char *argv[])
{
	INIT_EVERYTHING();
	
	//for frame rate.
	const int FPS=60;
	Uint32 FPS_A;
	
	Set_Badship_loc();
	
	// game loop
	while(!quit)
	{
	    FPS_A = SDL_GetTicks(); // for frame rate
		
		Key_Presses();
		
		Draw_Things();

		Update_Rect();
		
		 //if it is over the frame rate it will delay game. this must say at the end of the loop.
		 if(1000/FPS > SDL_GetTicks() - FPS_A)
			SDL_Delay(1000/FPS - (SDL_GetTicks() - FPS_A));
	}
	
	Destory_A("Shutdown");
	
	return 0;
}
