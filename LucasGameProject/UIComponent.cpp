#include "UIComponent.h"


//UIComponent::UIComponent(sf::Text * text)
//{
//	this->text = text;
//}

UIComponent::UIComponent(sf::Font* font, float x, float y)
{
	this->text.setFont(*font);
	this->position.x = x;
	this->position.y = y;
	this->text.setPosition(this->position);
}

UIComponent::~UIComponent()
{
}
