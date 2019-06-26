#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Menu.hpp"
#include "PizzaRestaurant.hpp"
#include "Pizza.hpp"
#include <iostream>
#include <unordered_map>

class Client
{
public:
	Client();
	~Client();

	void chooseRestaurant();
	void choosePizza();
	void addToppings();

	void showMenu();
private:
	PizzaRestaurant* restaurant;
	Pizza* pizza;
};

#endif