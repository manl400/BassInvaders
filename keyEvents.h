#ifndef KEYEVENTS_H
#define KEYEVENTS_H

bool quit = false;





// testing other posiblity. 


void Key_Presses()
{
	SDL_PumpEvents(); 
	
	const Uint8 * keys = SDL_GetKeyboardState(NULL);
	
	// i'm using this because i need to get continous-response keys with no delay on them for the keys.
	if (keys[SDL_GetScancodeFromKey(SDLK_LEFT)]){
		x -= movespeed;
	}
	if (keys[SDL_GetScancodeFromKey(SDLK_RIGHT)]){
		x += movespeed;
	}
	//single hit keys, mouse and other SDL events.
	while(SDL_PollEvent(&Eve0))
	{
		switch (Eve0.type)
		{
			case SDL_MOUSEMOTION:
				break;
				
			case SDL_QUIT:
				quit = true;
				break;
				case SDL_KEYDOWN:
					switch (Eve0.key.keysym.sym)
				{
					// key events that arn't contious-response can be put here.
		    			 //case SDLK_LEFT:  x-= 3; break;
           				 //case SDLK_RIGHT: x+= 3; break;
           				 case SDLK_DOWN: Fire_Laser(); if(Stop_pat) Stop_pat = false; break;
           				 case SDLK_1:    moveships_left(); break;
           				 case SDLK_2:    moveships_right(); break;
           				 case SDLK_3:    moveships_down(); break;
           				 case SDLK_4: Stop_pat = true; break;
           				 case SDLK_0:     Set_Badship_loc(); ship_live(); break;
            		
				    default: break;
				}
				break;
		}
	}
	
}

// a list of all SDL_keycodes here : https://wiki.libsdl.org/SDL_Keycode









































/*
void Key_Presses(){
	
		//SDL_GetKeyboardState(NULL);
		SDL_PollEvent(&Eve0);
		//while (SDL_PollEvent(&Eve0))
		//{
		
		switch (Eve0.type)
		{
			case SDL_QUIT:
				quit = true;
				break;
				
			case SDL_KEYDOWN:
				switch (Eve0.key.keysym.sym)
				{
					// all key events can be coded here and if the efect is longer then a few lines simple make a funtion for them in this header and then have the case call the funtion.

					
					/////////////////////////////////////
		    			 case SDLK_LEFT:  x-= 3; break;
           				 case SDLK_RIGHT: x+= 3; break;
            			
					/////////////////////////////////////
				    default: break;
				}
				break;
				
				
				case SDL_KEYUP:
				switch (Eve0.key.keysym.sym)
				{
					//case SDLK_LEFT:  x+= 3; break;
           			//case SDLK_RIGHT: x-= 3; break;
						
				    default: break;
				}
				break;
				
				
		//}
		}
}

*/







#endif

// a list of all SDL_keycodes here : https://wiki.libsdl.org/SDL_Keycode
