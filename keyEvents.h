#ifndef KEYEVENTS_H
#define KEYEVENTS_H

bool quit = false;

//////////////////
int x = 310, y = 440;
/////////////////



// testing other posiblity. 


void Key_Presses()
{
	//const Uint8 *keystate = reinterpret_cast<char*>(SDL_GetKeyboardState(NULL));
	SDL_PumpEvents(); 
	
	const Uint8 * keys = SDL_GetKeyboardState(NULL);
	
	// i'm using this because i need to get continous-response keys with no delay on them for the keys.
	if (keys[SDL_GetScancodeFromKey(SDLK_LEFT)]){
		x -= 3;
	}
	if (keys[SDL_GetScancodeFromKey(SDLK_RIGHT)]){
		x += 3;
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
            		
				    default: break;
				}
				break;
		}
	}
	
}











































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
