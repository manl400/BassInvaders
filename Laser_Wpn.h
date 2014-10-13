#ifndef LASER_WPN_H
#define LASER_WPN_H



void Laser_WPN()
{
	lx = x + 9;
	
	LaserA.x = lx;
	LaserA.y = ly;
	LaserA.h = 7;
	LaserA.w = 2.5;
}


void Draw_Laser_WPN()
{
	SDL_SetRenderDrawColor( Ren0, 255, 255, 255, 255 );
	SDL_RenderFillRect(Ren0, &LaserA);
}

void Fire_Laser()
{
	//LaserA.x = x;
	//LaserA.y = movespeed +2;
	// need to update bullet.
}
#endif

