#include "Client.hpp"
#include <iostream>
#include <exception>

Client::Client() : restaurant(nullptr), pizza(nullptr)
{}

Client::~Client()
{
	delete restaurant;
	delete pizza;
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
	else
	{
		throw std::invalid_argument(restaurant + " number doesn't exist!");
	}
}