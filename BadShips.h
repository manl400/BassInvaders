#ifndef BADSHIPS_H
#define BADSHIPS_H
// i'm going to up all of the bad shipszzz code in here because there are going to be a lot of rects.
/*
void CreateShips()
{
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
	
	BSA1.h = 20;
	BSA1.w = 20;
	
	BSA2.h = 20;
	BSA2.w = 20;
	
	BSA3.h = 20;
	BSA3.w = 20;
	
	BSA4.h = 20;
	BSA4.w = 20;
	
	BSA5.h = 20;
	BSA5.w = 20;
	
	BSA6.h = 20;
	BSA6.w = 20;
	
	BSA7.h = 20;
	BSA7.w = 20;
	
	BSA8.h = 20;
	BSA8.w = 20;
	
	BSA8.h = 20;
	BSA8.w = 20;
	
	BSA10.h = 20;
	BSA10.w = 20;	
}
*/


void Update_BadShip_Loc()
{
	BSA1.x = BSAx[1];
	BSA1.y = BSAy[1];
	
	BSA2.x = BSAx[2];
	BSA2.y = BSAy[2];
	
	BSA3.x = BSAx[3];
	BSA3.y = BSAy[3];
	
	BSA4.x = BSAx[4];
	BSA4.y = BSAy[4];
	
	BSA5.x = BSAx[5];
	BSA5.y = BSAy[5];
	
	BSA6.x = BSAx[6];
	BSA6.y = BSAy[6];
	
	BSA7.x = BSAx[7];
	BSA7.y = BSAy[7];
	
	BSA8.x = BSAx[8];
	BSA8.y = BSAy[8];
	
	BSA9.x = BSAx[9];
	BSA9.y = BSAy[9];
	
	BSA10.x = BSAx[10];
	BSA10.y = BSAy[10];
	
		
	BSA1.h = 20;
	BSA1.w = 20;
	
	BSA2.h = 20;
	BSA2.w = 20;
	
	BSA3.h = 20;
	BSA3.w = 20;
	
	BSA4.h = 20;
	BSA4.w = 20;
	
	BSA5.h = 20;
	BSA5.w = 20;
	
	BSA6.h = 20;
	BSA6.w = 20;
	
	BSA7.h = 20;
	BSA7.w = 20;
	
	BSA8.h = 20;
	BSA8.w = 20;
	
	BSA8.h = 20;
	BSA8.w = 20;
	
	BSA10.h = 20;
	BSA10.w = 20;
	


}

void Set_Badship_loc()
{
	int spacerX = 20;
	int spacerY = 20;
	for(int j= 1; j < 11; j++)
	{
		BSAy[j] = (20);
		for(int i =1; i < 11; i++)
		{
		
		BSAx[i] = ((spacerX * 2) * i);
		}
		// and 2nd for loop when needed
		//BSAy[i] = ((spacerY * 2) * i);
	}
}

void Draw_BadShips()
{
	SDL_SetRenderDrawColor( Ren0, 200, 200, 200, 255 ); 
	//if(BSAA[1])
	SDL_RenderFillRect(Ren0, &BSA1);
	//if(BSAA[2])
	SDL_RenderFillRect(Ren0, &BSA2);
	//if(BSAA[3])
	SDL_RenderFillRect(Ren0, &BSA3);
	//if(BSAA[4])
	SDL_RenderFillRect(Ren0, &BSA4);
	//if(BSAA[5])
	SDL_RenderFillRect(Ren0, &BSA5);
	//if(BSAA[6])
	SDL_RenderFillRect(Ren0, &BSA6);
	//if(BSAA[7])
	SDL_RenderFillRect(Ren0, &BSA7);
	//if(BSAA[8])
	SDL_RenderFillRect(Ren0, &BSA8);
	//if(BSAA[9])
	SDL_RenderFillRect(Ren0, &BSA9);
	//if(BSAA[10])
	SDL_RenderFillRect(Ren0, &BSA10);
	
}


#endif
