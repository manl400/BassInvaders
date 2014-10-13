#ifndef RENDERING_H
#define RENDERING_H


//draw the background.
void Draw_Background()
{

	SDL_SetRenderDrawColor( Ren0, 0, 0, 0, 255 );
		
	SDL_RenderClear(Ren0);
	
}

void Draw_Ship()
{
	SDL_SetRenderDrawColor( Ren0, 255, 255, 255, 255 );
	SDL_RenderFillRect(Ren0, &ShipA);
	SDL_RenderFillRect(Ren0, &ShipB);	
}


// this draws evething in one funtion.
void Draw_Things()
{
	Draw_Background();
	Draw_Ship();
	Draw_Laser_WPN();
	SDL_RenderPresent(Ren0);
}

#endif
