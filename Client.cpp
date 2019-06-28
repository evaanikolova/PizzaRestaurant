#include "Client.hpp"
#include "DominosRestaurant.hpp"
#include "MrPizzaRestaurant.hpp"
#include <iostream>
#include <exception>
#include <unistd.h>
#include <stdlib.h>

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
		throw std::invalid_argument("Number doesn't exist!");
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
		sleep(3);
	}
	catch (std::invalid_argument& ia)
	{
		throw std::invalid_argument(ia.what());
	}
}

void Client::addToppings()
{
	char addMoreToppings;
	
	while(true)
	{
		std::cout << "Would you like to add some more toppings to your pizza? Type y or n: ";
		std::cin >> addMoreToppings;

		std::cin.get();

		if (addMoreToppings == 'y')
		{
			this->restaurant->showToppings();

			std::string topping;
			std::getline(std::cin, topping);

			try
			{
				this->pizza = this->restaurant->addTopping(this->pizza, topping);
				std::cout << "Adding topping " + topping + "..." << std::endl;
				sleep(3);
				
				std::cout << "Current order: ";
				this->checkOrder();
			}
			catch (std::invalid_argument& ia)
			{
				throw std::invalid_argument(ia.what());
			}			
		}
		else if (addMoreToppings == 'n')
		{
			std::cout <<"No more toppings, ok." << std::endl;
			break;
		}
		else
		{
			throw std::invalid_argument("You should type y or n!");
		}
	}
}

void Client::checkOrder()
{
	std::cout << this->pizza->getDescription() << "\t" << this->pizza->getPrice() << "$" << std::endl;
}

void Client::confirmOrder()
{
	this->checkOrder();
	std::cout << "This is your final order. Are you sure? Type y or n: ";

	char finishOrder;
	std::cin >> finishOrder;

	if (finishOrder == 'y')
	{
		std::cout << "Bon Apeti!" << std::endl;
	}
	else if (finishOrder == 'n')
	{
		std::cout << "And all of this for nothing..." << std::endl;
	}
	else
	{
		throw std::invalid_argument("You should type y or n!");
	}
}

void Client::showRestaurants()
{
	std::cout << "(1) Dominos" << std::endl;
	std::cout << "(2) MrPizza" << std::endl;

	std::cout << "Please, choose a restaurant by typing the number: ";
}

void Client::makeOrder()
{
	try
	{
		this->chooseRestaurant();
	}
	catch (std::invalid_argument& ia)
	{
		throw std::invalid_argument(ia.what());
	}
	try
	{
		this->choosePizza();
	}
	catch (std::invalid_argument& ia)
	{
		throw std::invalid_argument(ia.what());
	}
	try
	{
		this->addToppings();
	}
	catch (std::invalid_argument& ia)
	{
		throw std::invalid_argument(ia.what());
	}
	try
	{
		this->confirmOrder();
	}
	catch (std::invalid_argument& ia)
	{
		throw std::invalid_argument(ia.what());
	}
}