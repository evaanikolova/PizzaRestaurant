#ifndef MRPIZZARESTAURANT_HPP
#define MRPIZZARESTAURANT_HPP

#include "Pizza.hpp"
#include "PizzaRestaurant.hpp"
#include <unordered_map>

class MrPizzaRestaurant : public PizzaRestaurant
{
public:
	MrPizzaRestaurant();
	virtual ~MrPizzaRestaurant();

	virtual Pizza* createPizza(std::string pizzaName) override;
	virtual Pizza* getMostOrderedPizza() override;

private:
	std::unordered_map<std::string, Pizza*> pizzas;
	Pizza* mostOrderedPizza;

	void initPizzas();
};

#endif