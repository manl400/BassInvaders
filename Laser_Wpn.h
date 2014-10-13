#ifndef LASER_WPN_H
#define LASER_WPN_H
bool laser, wait; // need to find a way to make this not global.
bool particles_GET(int a,int b);

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

// praticals

bool particles_GET(int a, int b)
{
	
}
int alphalowerA = 255;
void Draw_particles()
{
	
	if(!particlesA && alphalowerA != 0)
	alphalowerA -= 10;

	SDL_SetRenderDrawColor( Ren0, alphalowerA, alphalowerA, alphalowerA, 255 ); 
	SDL_RenderFillRect(Ren0, &PARTA);
	SDL_RenderFillRect(Ren0, &PARTB);
	SDL_RenderFillRect(Ren0, &PARTC);
	SDL_RenderFillRect(Ren0, &PARTD);
	SDL_RenderFillRect(Ren0, &PARTE);
	SDL_RenderFillRect(Ren0, &PARTF);
	SDL_RenderFillRect(Ren0, &PARTG);
}

bool tic_tock; //for particals// need to not have this be gloabal.
void particles(int a, int b)
{
	if(particlesA)
	{
	for(int i; i < 7; i++)
	{
		px[i] = a + 10;
		py[i] = b - 10;
	}
	particlesA = false;
	}
	
	
	PARTA.x = px[0];
	PARTA.y	= py[0];
	PARTA.h = 1;
	PARTA.w = 1;
	
	PARTB.x = px[1];
	PARTB.y	= py[1];
	PARTB.h = 1;
	PARTB.w = 1;
	
	PARTC.x = px[2];
	PARTC.y	= py[2];
	PARTC.h = 1;
	PARTC.w = 1;
	
	PARTD.x = px[3];
	PARTD.y	= py[3];
	PARTD.h = 1;
	PARTD.w = 1;
	
	PARTE.x = px[4];
	PARTE.y	= py[4];
	PARTE.h = 1;
	PARTE.w = 1;
	
	PARTF.x = px[5];
	PARTF.y	= py[5];
	PARTF.h = 1;
	PARTF.w = 1;
	
	PARTG.x = px[6];
	PARTG.y	= py[6];
	PARTG.h = 1;
	PARTG.w = 1;
	
	if(!particlesA)
	{
		if(tic_tock)
		tic_tock =false;
		else
		tic_tock = true;
		
		px[0] -= movespeed - 1;
		/////////////////////////////////
		px[1] -= movespeed- 2;
		if(tic_tock)
		py[1] -= movespeed- 3;
		/////////////////////////////////
		px[2] -= movespeed- 3,py[2] -= movespeed- 4;
		/////////////////////////////////
		py[3] -= movespeed- 2;
		/////////////////////////////////
		px[4] += movespeed- 3,py[4] -= movespeed- 4;
		/////////////////////////////////
		px[5] += movespeed- 2;
		if(tic_tock)
		py[5] -= movespeed- 3;
		/////////////////////////////////
		px[6] += movespeed- 1;
	}
	
	// check to turn of gun partdicals
	if(ly < 225)
	{
	particlesA = true;
	alphalowerA = 255;
	}
}


// laser agian 
void update_laser()
{
	if (LAZER){
	LaserA.x = temp_loc;
	ly -= movespeed + 3;
	
	particles(x,y);
	
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



#endif

