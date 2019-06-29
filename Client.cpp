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

//checks for the existence of the restaurant
void Client::findRestaurant(int restaurantNumber)
{
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
		throw std::invalid_argument("A restaurant with this number doesn't exist!");
	}
}

void Client::chooseRestaurant()
{
	while (true)
	{
		this->showRestaurants();

		unsigned short int restaurantNumber;
		std::cin >> restaurantNumber;

		try
		{
			findRestaurant(restaurantNumber);
			break;
		}
		catch(std::invalid_argument& ia)
		{
			std::cout << ia.what();
			std::cout << " We weren't able to find the selected restaurant. Try again." << std::endl;
		}
	}
}

void Client::choosePizza()
{
	while (true)
	{
		this->restaurant->showMenu();

		std::string pizzaName;
		std::cin >> pizzaName;

		try
		{
			this->pizza = this->restaurant->createPizza(pizzaName);
			std::cout << "Cooking pizza " + pizzaName + "..." << std::endl;
			sleep(3);
			break;
		}
		catch (std::invalid_argument& ia)
		{
			std::cout << ia.what();
			std::cout << " We weren't able to select the preferred pizza. Try again." << std::endl;
		}
	}
}

void Client::addToppings()
{	
	while (true)
	{
		char addMoreToppings;

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
				std::cout << ia.what();
				std::cout << " We weren't able to add the preferred topping. Try again" << std::endl;
			}
		}
		else if (addMoreToppings == 'n')
		{
			std::cout <<"No more toppings, ok." << std::endl;
			break;
		}
		else
		{
			std::cout << "You should type y or n!" << std::endl;
		}
	}
}

void Client::checkOrder()
{
	std::cout << this->pizza->getDescription() << "\t" << this->pizza->getPrice() << "$" << std::endl;
}

void Client::confirmOrder()
{
	while (true)
	{
		this->checkOrder();
		std::cout << "This is your final order. Are you sure? Type y or n: ";

		char finishOrder;
		std::cin >> finishOrder;

		if (finishOrder == 'y')
		{
			std::cout << "Bon Apeti!" << std::endl;
			break;
		}
		else if (finishOrder == 'n')
		{
			std::cout << "And all of this for nothing..." << std::endl;
			break;
		}
		else
		{
			std::cout << "You should type y or n!" << std::endl;
		}
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
	this->chooseRestaurant();
	this->choosePizza();
	this->addToppings();
	this->confirmOrder();	
}