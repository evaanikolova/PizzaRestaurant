#include "Client.hpp"
#include "DominosRestaurant.hpp"
#include "MrPizzaRestaurant.hpp"
#include "DijonMustard.hpp"
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
		throw std::invalid_argument(restaurantNumber + " number doesn't exist!\n");
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
		std::cout << ia.what();
	}
}

void Client::addToppings()
{
	char addMoreToppings;
	
	while(true)
	{
		std::cout << "Would you like to add some more toppings to your pizza? Type y or n: ";
		std::cin >> addMoreToppings;

		if (addMoreToppings == 'y')
		{
			this->restaurant->showToppings();

			std::cin.get();

			std::cout << "Please, choose a topping by typing the name: ";
			std::string topping;
			std::getline(std::cin, topping);

			try
			{
				this->pizza = this->restaurant->addTopping(this->pizza, topping);
				std::cout << "Adding topping " + topping + "..." << std::endl;

				std::cout << "Current order: ";
				std::cout << this->pizza->getDescription() << "\t" << this->pizza->getPrice() << "$" << std::endl;
				
				sleep(3);
			}
			catch (std::invalid_argument& ia)
			{
				std::cout << ia.what();
			}			
		}
		else if (addMoreToppings == 'n')
		{
			std::cout <<"EHo";
			break;
		}
		else
		{
			throw std::invalid_argument("You should type y or n!.");
		}
	}
}

void Client::confirmOrder()
{
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
		throw std::invalid_argument("You should type y or n!.");
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
		std::cout << ia.what();
	}
	try
	{
		this->choosePizza();
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}
	try
	{
		this->addToppings();
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}
	try
	{
		this->confirmOrder();
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}
}