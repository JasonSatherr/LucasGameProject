#include "Initializer.h"

namespace start
{
	//Creates the window
	void initWindow(sf::VideoMode* videoMode,sf::RenderWindow ** window) {
		/**
			@return void

			Customizes and creates the window
		*/
		(videoMode)->width = 800;
		(videoMode)->height = 600;
		(*window) = new sf::RenderWindow(*videoMode, "Lucas Game");
		(*window)->setFramerateLimit(30);
	}
	//Starts the music
	void initMusic(sf::Music* musicPlayer) {
		if (!musicPlayer->openFromFile("Resources/Music/music1.ogg")) {
			throw ("Music could not be loaded :(");
		}
		musicPlayer->setVolume(20);
		musicPlayer->play();
		musicPlayer->setLoop(true);
	}
	//Loads a Font
	void initFont(sf::Font* font, sf::Text* text) {
		if (!font->loadFromFile("Resources/Fonts/Shizuru-Regular.ttf")) {
			throw ("Font could not be loaded :(");
		}
		//Connect the text to the font
		initText(font,text);
		/*musicPlayer->play();
		musicPlayer->setLoop(true);*/
	}

	void initText(sf::Font* font, sf::Text* text)
	{
		text->setFont(*font);
		text->setCharacterSize(24);
		text->setFillColor(sf::Color::Yellow);
	}


	void initAll(sf::VideoMode* videoMode, sf::RenderWindow** window,
		sf::Music* musicPlayer, sf::Font* font, sf::Text* text) {
		initWindow(videoMode, window);
		initMusic(musicPlayer);
		initFont(font, text);
	}
}