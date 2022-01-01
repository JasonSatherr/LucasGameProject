#pragma once
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
/*
* Initializes game on boot
*/
namespace start
{
	//Creates the window
	void initWindow(sf::VideoMode* videoMode, sf::RenderWindow** window);
	//Starts the music
	void initMusic(sf::Music * musicPlayer);
	//Loads a Font
	void initFont(sf::Font* font, sf::Text* text);
	//Loads the font into the text
	void initText(sf::Font* font, sf::Text* text);

	void initAll(sf::VideoMode* videoMode, sf::RenderWindow** window,
		sf::Music* musicPlayer, sf::Font* font, sf::Text* text);
}
