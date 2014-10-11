#ifndef KEYEVENTS_H
#define KEYEVENTS_H

bool quit = false;

void Key_Presses(){
		
		switch (Eve0.type)
		{
			case SDL_QUIT:
				quit = true;
				break;
				
			case SDL_KEYDOWN:
				switch (Eve0.key.keysym.sym)
				{
					// all key events can be coded here and if the efect is longer then a few lines simple make a funtion for them in this header and then have the case call the funtion.
					case SDLK_0: std::cout << "THE 0 KEY HAS BEEN HIT!" << std::endl; break; // these 2 are tests.
					case SDLK_1: std::cout << "THE 1 KEY HAS BEEN HIT!" << std::endl; break;
				}
				break;
		}
		}

#endif

// a list of all SDL_keycodes here : https://wiki.libsdl.org/SDL_Keycode
