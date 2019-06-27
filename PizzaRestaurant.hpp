#ifndef PIZZARESTAURANT_HPP
#define PIZZARESTAURANT_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class PizzaRestaurant
{
public:
	PizzaRestaurant() = default;
	virtual ~PizzaRestaurant() = default;

	virtual Pizza* createPizza(std::string pizzaName) = 0;
	virtual Pizza* getMostOrderedPizza() = 0;
	
	virtual void showMenu() = 0;
};

#endif