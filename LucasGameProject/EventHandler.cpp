#include "EventHandler.h"


void EventHandler::initVariables()
{

}

EventHandler::EventHandler()
{
	this->initVariables();
}

EventHandler::~EventHandler()
{

}

void EventHandler::update(sf::Window *window)
{
    while (window->pollEvent(this->event))
    {
        // check the type of the event...
        //This is gonna be a big switch case to handle events related to the window I think...
        switch (this->event.type)
        {
            // window closed
        case sf::Event::Closed:
            window->close();
            break;

            // key pressed
        case sf::Event::KeyPressed:
                break;
        case sf::Event::LostFocus:
            //Pause the game!!
            break;
        case sf::Event::GainedFocus:
            //Resume the game!!
            break;

            // we don't process other types of events
        default:
            break;
        }
    }
}
