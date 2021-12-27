#include "Initializer.h"

namespace startupInit
{
	//Creates the window
	void initWindow(sf::Window* window) {

	}
	//Starts the music
	void initMusic(sf::Music* musicPlayer) {
		if (!musicPlayer->openFromFile("Resources/Music/music1.mp3")) {
			throw ("Music could not be loaded :(");
		}
		musicPlayer->play();
		musicPlayer->setLoop(true);
	}
	//Loads a Font
	void initFont(sf::Font* font) {
		if (!font->loadFromFile("Resources/Fonts/Shizuru-Regular.ttf")) {
			throw ("Music could not be loaded :(");
		}
		musicPlayer->play();
		musicPlayer->setLoop(true);
	}


}