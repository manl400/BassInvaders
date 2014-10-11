#ifndef DESTORY_H
#define DESTORY_H

void Destory_A(std::string AUGS)
{
	// This is the Destory you will run to exit the game it will desotry everthing and exit the game || used after saving game or others.
	if(AUGS == "SHUTDOWN" || AUGS == "Shutdown" || AUGS == "shutdown" || AUGS == "SHUT DOWN" || AUGS == "Shut Down" || AUGS == "Shut down" || AUGS == "shut down")
	{
		SDL_DestroyTexture (Tex0);
		SDL_DestroyRenderer(Ren0);
		SDL_DestroyWindow  (Win0);
	}
}


#endif

