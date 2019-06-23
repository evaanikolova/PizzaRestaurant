#include "Client.hpp"
#include <iostream>

Client::Client()
{

}

Client::~Client()
{

}

void Client::showMenu()
{
	Menu menu;
	menu.showRestaurants();

	unsigned short int restaurant;
	std::cin >> restaurant;

	if (restaurant == 1)
	{
		menu.showDominos();
	}
	else if (restaurant == 2)
	{
		menu.showMrPizza();
	}

}