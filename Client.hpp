#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "PizzaRestaurant.hpp"
#include "Pizza.hpp"
#include <iostream>
#include <unordered_map>

class Client
{
public:
	Client();
	~Client();

	void showRestaurants();
	void makeOrder();
private:
	PizzaRestaurant* restaurant;
	Pizza* pizza;

	void chooseRestaurant();
	void choosePizza();
	void addToppings();
	void checkOrder();
	void confirmOrder();
};

#endif