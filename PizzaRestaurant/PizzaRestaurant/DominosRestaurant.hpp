#ifndef DOMINOSRESTAURANT_HPP
#define DOMINOSRESTAURANT_HPP

#include "Pizza.hpp"
#include "PizzaRestaurant.hpp"
#include <unordered_map>

class DominosRestaurant : public PizzaRestaurant
{
public:
	DominosRestaurant();
	virtual ~DominosRestaurant();

	virtual Pizza* createPizza(std::string pizzaName) override;

	virtual void showMenu() override;
private:
	std::unordered_map<std::string, Pizza*> pizzas;

	void initPizzas();
};

#endif