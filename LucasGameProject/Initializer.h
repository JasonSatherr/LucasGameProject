#pragma once
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
/*
* Initializes game on boot
*/
namespace startupInit
{
	//Creates the window
	void initWindow(sf::Window * window);
	//Starts the music
	void initMusic(sf::Music * musicPlayer);
	//Loads a Font
	void initFont(sf::Font * font);


}
