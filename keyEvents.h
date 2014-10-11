#ifndef KEYEVENTS_H
#define KEYEVENTS_H

bool quit = false;

//////////////////
int x = 310, y = 440;
/////////////////

void Key_Presses(){
		
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
#endif

// a list of all SDL_keycodes here : https://wiki.libsdl.org/SDL_Keycode
