#ifndef PIZZARESTAURANT_HPP
#define PIZZARESTAURANT_HPP

#include "Pizza.hpp"
#include "ToppingsDecorator.hpp"
#include <unordered_map>

class PizzaRestaurant
{
public:
	PizzaRestaurant();
	virtual ~PizzaRestaurant();

	virtual Pizza* createPizza(std::string pizzaName) = 0;
	virtual Pizza* addTopping(Pizza* pizza, std::string topping);

	virtual void showMenu() = 0;
	virtual void showToppings();
private:
	std::unordered_map<std::string, ToppingsDecorator*> toppings;

	void initToppings(Pizza* pizza);
};

#endif