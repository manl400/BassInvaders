#ifndef RECT_UPDATE_H
#define RECT_UPDATE_H
// update location of rects.

// uddate just the ship so not stars and stuff. use a diffrent funtion for those.
void Ship_Update()
{
		ShipA.x = x;
		ShipA.y = y;
		ShipA.w = 20;
		ShipA.h = 10;
		
		ShipB.x = (5+x);
		ShipB.y = y-7;
		ShipB.w = 10;
		ShipB.h = 10;
}



// physics and such talke place in this header also.

void screen_bonder()
{
	if(x <= 0)
	x += movespeed;
	if(x >= 620)
	x -= movespeed;
}

//this updates all rects.
void Update_Rect()
{
	screen_bonder();
	Ship_Update();
	Laser_WPN();
	update_laser();
	Check_hit();
	Update_BadShip_Loc();
	Badship_movement();
	
	
}
#endif
