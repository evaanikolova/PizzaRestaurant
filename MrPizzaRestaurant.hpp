#ifndef MRPIZZARESTAURANT_HPP
#define MRPIZZARESTAURANT_HPP

#include "Pizza.hpp"
#include "PizzaRestaurant.hpp"
#include "ToppingsDecorator.hpp"
#include <unordered_map>

class MrPizzaRestaurant : public PizzaRestaurant
{
public:
	MrPizzaRestaurant();
	virtual ~MrPizzaRestaurant();

	virtual Pizza* createPizza(std::string pizzaName) override;
	virtual Pizza* getMostOrderedPizza() override;

	virtual void showMenu() override;

private:
	std::unordered_map<std::string, Pizza*> pizzas;
	Pizza* mostOrderedPizza;

	void initPizzas();
};

#endif