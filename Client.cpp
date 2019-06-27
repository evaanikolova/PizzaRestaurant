#include "Client.hpp"
#include "DominosRestaurant.hpp"
#include "MrPizzaRestaurant.hpp"
#include <iostream>
#include <exception>
#include <unistd.h>

Client::Client() : restaurant(nullptr), pizza(nullptr)
{}

Client::~Client()
{
	delete restaurant;
	delete pizza;
}

void Client::chooseRestaurant()
{
	this->showRestaurants();

	unsigned short int restaurantNumber;
	std::cin >> restaurantNumber;

	if (restaurantNumber == 1)
	{
		this->restaurant = new DominosRestaurant();
	}
	else if (restaurantNumber == 2)
	{
		this->restaurant = new MrPizzaRestaurant();
	}
	else
	{
		throw std::invalid_argument(restaurantNumber + " number doesn't exist!");
	}
}

void Client::choosePizza()
{
	this->restaurant->showMenu();

	std::string pizzaName;
	std::cin >> pizzaName;

	try
	{
		this->pizza = this->restaurant->createPizza(pizzaName);
		std::cout << "Cooking pizza " + pizzaName + "..." << std::endl;
		sleep(5);
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}
}

void Client::addToppings()
{

}

void Client::showRestaurants()
{
	std::cout << "(1) Dominos" << std::endl;
	std::cout << "(2) MrPizza" << std::endl;
	std::cout << "Please, choose a restaurant by typing the number: ";
}

void Client::makeOrder()
{
	this->chooseRestaurant();
	this->choosePizza();
	this->addToppings();
}