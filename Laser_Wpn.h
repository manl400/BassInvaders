#ifndef LASER_WPN_H
#define LASER_WPN_H
bool laser, wait; // need to find a way to make this not global.


void Laser_WPN()
{
	lx = x + 9;
	if(!LAZER)
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

void update_laser()
{
	if (LAZER){
	LaserA.x = temp_loc;
	ly -= movespeed + 2;
	
	if(ly < 0)
	{
		LAZER = false;
		ly = 430;
		wait = false;
	}
	
}
else
{}

//sound or somthing
}




void Fire_Laser()
{
	if(LaserA.y < -5)
	wait = false;

	if(!wait)
	laser = true;
	
	if(laser)
	{
		laser = false;
		wait = true;
		temp_loc = x+9;
		LAZER = true;
	}
}



#endif

