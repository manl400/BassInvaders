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

void ship_live()
{
	for(int i = 1; i < 16; i++)
	{
		BSAA[i] = true;
		BSBA[i] = true;
		BSCA[i] = true;
	}
}

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
	
	BSA11.x = BSAx[11];
	BSA11.y = BSAy[11];
	
	BSA12.x = BSAx[12];
	BSA12.y = BSAy[12];
	
	BSA13.x = BSAx[13];
	BSA13.y = BSAy[13];
	
	BSA14.x = BSAx[14];
	BSA14.y = BSAy[14];

	BSA15.x = BSAx[15];
	BSA15.y = BSAy[15];
	
		
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
	
	BSA9.h = 20;
	BSA9.w = 20;
	
	BSA10.h = 20;
	BSA10.w = 20;
	
    BSA11.h = 20;
    BSA11.w = 20;
    
    BSA12.h = 20;
    BSA12.w = 20;
    
    BSA13.h = 20;
    BSA13.w = 20;
    
    BSA14.h = 20;
    BSA14.w = 20;
    
    BSA15.h = 20;
    BSA15.w = 20;
    
    // 2nd row //////////////////////////////////////////
    
    BSB1.x = BSBx[1];
	BSB1.y = BSBy[1];
	
	BSB2.x = BSBx[2];
	BSB2.y = BSBy[2];
	
	BSB3.x = BSBx[3];
	BSB3.y = BSBy[3];
	
	BSB4.x = BSBx[4];
	BSB4.y = BSBy[4];
	
	BSB5.x = BSBx[5];
	BSB5.y = BSBy[5];
	
	BSB6.x = BSBx[6];
	BSB6.y = BSBy[6];
	
	BSB7.x = BSBx[7];
	BSB7.y = BSBy[7];
	
	BSB8.x = BSBx[8];
	BSB8.y = BSBy[8];
	
	BSB9.x = BSBx[9];
	BSB9.y = BSBy[9];
	
	BSB10.x = BSBx[10];
	BSB10.y = BSBy[10];
	
	BSB11.x = BSBx[11];
	BSB11.y = BSBy[11];
	
	BSB12.x = BSBx[12];
	BSB12.y = BSBy[12];
	
	BSB13.x = BSBx[13];
	BSB13.y = BSBy[13];
	
	BSB14.x = BSBx[14];
	BSB14.y = BSBy[14];

	BSB15.x = BSBx[15];
	BSB15.y = BSBy[15];
	
		
	BSB1.h = 20;
	BSB1.w = 20;
	
	BSB2.h = 20;
	BSB2.w = 20;
	
	BSB3.h = 20;
	BSB3.w = 20;
	
	BSB4.h = 20;
	BSB4.w = 20;
	
	BSB5.h = 20;
	BSB5.w = 20;
	
	BSB6.h = 20;
	BSB6.w = 20;
	
	BSB7.h = 20;
	BSB7.w = 20;
	
	BSB8.h = 20;
	BSB8.w = 20;
	
	BSB8.h = 20;
	BSB8.w = 20;
	
	BSB9.h = 20;
	BSB9.w = 20;
	
	BSB10.h = 20;
	BSB10.w = 20;
	
    BSB11.h = 20;
    BSB11.w = 20;
    
    BSB12.h = 20;
    BSB12.w = 20;
    
    BSB13.h = 20;
    BSB13.w = 20;
    
    BSB14.h = 20;
    BSB14.w = 20;
    
    BSB15.h = 20;
    BSB15.w = 20;
    
    // Row 3 /////////////
    
    BSC1.x = BSCx[1];
	BSC1.y = BSCy[1];
	
	BSC2.x = BSCx[2];
	BSC2.y = BSCy[2];
	
	BSC3.x = BSCx[3];
	BSC3.y = BSCy[3];
	
	BSC4.x = BSCx[4];
	BSC4.y = BSCy[4];
	
	BSC5.x = BSCx[5];
	BSC5.y = BSCy[5];
	
	BSC6.x = BSCx[6];
	BSC6.y = BSCy[6];
	
	BSC7.x = BSCx[7];
	BSC7.y = BSCy[7];
	
	BSC8.x = BSCx[8];
	BSC8.y = BSCy[8];
	
	BSC9.x = BSCx[9];
	BSC9.y = BSCy[9];
	
	BSC10.x = BSCx[10];
	BSC10.y = BSCy[10];
	
	BSC11.x = BSCx[11];
	BSC11.y = BSCy[11];
	
	BSC12.x = BSCx[12];
	BSC12.y = BSCy[12];
	
	BSC13.x = BSCx[13];
	BSC13.y = BSCy[13];
	
	BSC14.x = BSCx[14];
	BSC14.y = BSCy[14];

	BSC15.x = BSCx[15];
	BSC15.y = BSCy[15];
	
		
	BSC1.h = 20;
	BSC1.w = 20;
	
	BSC2.h = 20;
	BSC2.w = 20;
	
	BSC3.h = 20;
	BSC3.w = 20;
	
	BSC4.h = 20;
	BSC4.w = 20;
	
	BSC5.h = 20;
	BSC5.w = 20;
	
	BSC6.h = 20;
	BSC6.w = 20;
	
	BSC7.h = 20;
	BSC7.w = 20;
	
	BSC8.h = 20;
	BSC8.w = 20;
	
	BSC8.h = 20;
	BSC8.w = 20;
	
	BSC9.h = 20;
	BSC9.w = 20;
	
	BSC10.h = 20;
	BSC10.w = 20;
	
    BSC11.h = 20;
    BSC11.w = 20;
    
    BSC12.h = 20;
    BSC12.w = 20;
    
    BSC13.h = 20;
    BSC13.w = 20;
    
    BSC14.h = 20;
    BSC14.w = 20;
    
    BSC15.h = 20;
    BSC15.w = 20;

}

void Set_Badship_loc()
{
	int spacerX = 20;
	int spacerY = 20;
	for(int j= 1; j < 16; j++)
	{
		BSAy[j] = (20);
		for(int i =1; i < 16; i++)
		{
		
		BSAx[i] = ((spacerX * 2) * i);
		}
		// and 2nd for loop when needed
		//BSAy[i] = ((spacerY * 2) * i);
	}
	
	for(int j= 1; j < 16; j++)
	{
		BSBy[j] = (60);
		
			for(int i = 1; i < 16; i++)
			{
				BSBx[i] = ((20* 2) * i);
			}
	}
	
		for(int j= 1; j < 16; j++)
	{
		BSCy[j] = (100);
		
			for(int i = 1; i < 16; i++)
			{
				BSCx[i] = ((20* 2) * i);
			}
	}
}

void moveships_left()
{
	for(int i = 1; i < 16; i++)
	{
		BSAx[i] -= 1;
		BSBx[i] -= 1;
	    BSCx[i] -= 1;
	}
}

void moveships_right()
{
	for(int i = 1; i < 16; i++)
	{
		BSAx[i] += 1;
		BSBx[i] += 1;
	    BSCx[i] += 1;
	}
}

void moveships_down()
{
	for(int i = 1; i < 16; i++)
	{
		BSAy[i] += 3;
		BSBy[i] += 3;
	    BSCy[i] += 3;
	}
}

////(SHIP LOGIC)/////
int dic = 1;
void Badship_movement()
{
	if(dic == 1)
	moveships_left();
	else if(dic == 2)
	moveships_right();
	
	for(int i = 1; i < 16; i++)
	{
		if((BSAx[i] < 0 && BSAA[i])|| (BSBx[i] < 0 && BSBA[i]) || (BSCx[i] < 0 && BSCA[i]))
		{
			dic = 2;
			moveships_down();
		}
		if((BSAx[i] > 620 && BSAA[i]) || (BSBx[i] > 620 && BSBA[i]) || (BSCx[i] > 620 && BSCA[i]))
		{
			dic = 1;
			moveships_down();
		}
	}
}
////////////////////
// hit detetion
void Check_hit()
{
	// lazer x and y is lx, ly 
	
}



void Draw_BadShips()
{
	SDL_SetRenderDrawColor( Ren0, 200, 200, 200, 255 ); 
	if(BSAA[1])
	SDL_RenderFillRect(Ren0, &BSA1);
	if(BSAA[2])
	SDL_RenderFillRect(Ren0, &BSA2);
	if(BSAA[3])
	SDL_RenderFillRect(Ren0, &BSA3);
	if(BSAA[4])
	SDL_RenderFillRect(Ren0, &BSA4);
	if(BSAA[5])
	SDL_RenderFillRect(Ren0, &BSA5);
	if(BSAA[6])
	SDL_RenderFillRect(Ren0, &BSA6);
	if(BSAA[7])
	SDL_RenderFillRect(Ren0, &BSA7);
	if(BSAA[8])
	SDL_RenderFillRect(Ren0, &BSA8);
	if(BSAA[9])
	SDL_RenderFillRect(Ren0, &BSA9);
	if(BSAA[10])
	SDL_RenderFillRect(Ren0, &BSA10);
	if(BSAA[11])
	SDL_RenderFillRect(Ren0, &BSA11);
	if(BSAA[12])
	SDL_RenderFillRect(Ren0, &BSA12);
	if(BSAA[13])
	SDL_RenderFillRect(Ren0, &BSA13);
	if(BSAA[14])
	SDL_RenderFillRect(Ren0, &BSA14);
	if(BSAA[15])
	SDL_RenderFillRect(Ren0, &BSA15);
	// row B //////////////
	////////////////////	SDL_SetRenderDrawColor( Ren0, 200, 200, 200, 255 ); 
	if(BSBA[1])
	SDL_RenderFillRect(Ren0, &BSB1);
	if(BSBA[2])
	SDL_RenderFillRect(Ren0, &BSB2);
	if(BSBA[3])
	SDL_RenderFillRect(Ren0, &BSB3);
	if(BSBA[4])
	SDL_RenderFillRect(Ren0, &BSB4);
	if(BSBA[5])
	SDL_RenderFillRect(Ren0, &BSB5);
	if(BSBA[6])
	SDL_RenderFillRect(Ren0, &BSB6);
	if(BSBA[7])
	SDL_RenderFillRect(Ren0, &BSB7);
	if(BSBA[8])
	SDL_RenderFillRect(Ren0, &BSB8);
	if(BSBA[9])
	SDL_RenderFillRect(Ren0, &BSB9);
	if(BSBA[10])
	SDL_RenderFillRect(Ren0, &BSB10);
	if(BSBA[11])
	SDL_RenderFillRect(Ren0, &BSB11);
	if(BSBA[12])
	SDL_RenderFillRect(Ren0, &BSB12);
	if(BSBA[13])
	SDL_RenderFillRect(Ren0, &BSB13);
	if(BSBA[14])
	SDL_RenderFillRect(Ren0, &BSB14);
	if(BSBA[15])
	SDL_RenderFillRect(Ren0, &BSB15);
	
	//////////////////////////////////////////
	////////////ROW C ////////////////////////
	//////////////////////////////////////////
	
	if(BSCA[1])
	SDL_RenderFillRect(Ren0, &BSC1);
	if(BSCA[2])
	SDL_RenderFillRect(Ren0, &BSC2);
	if(BSCA[3])
	SDL_RenderFillRect(Ren0, &BSC3);
	if(BSCA[4])
	SDL_RenderFillRect(Ren0, &BSC4);
	if(BSCA[5])
	SDL_RenderFillRect(Ren0, &BSC5);
	if(BSCA[6])
	SDL_RenderFillRect(Ren0, &BSC6);
	if(BSCA[7])
	SDL_RenderFillRect(Ren0, &BSC7);
	if(BSCA[8])
	SDL_RenderFillRect(Ren0, &BSC8);
	if(BSCA[9])
	SDL_RenderFillRect(Ren0, &BSC9);
	if(BSCA[10])
	SDL_RenderFillRect(Ren0, &BSC10);
	if(BSCA[11])
	SDL_RenderFillRect(Ren0, &BSC11);
	if(BSCA[12])
	SDL_RenderFillRect(Ren0, &BSC12);
	if(BSCA[13])
	SDL_RenderFillRect(Ren0, &BSC13);
	if(BSCA[14])
	SDL_RenderFillRect(Ren0, &BSC14);
	if(BSCA[15])
	SDL_RenderFillRect(Ren0, &BSC15);
	
}


#endif
