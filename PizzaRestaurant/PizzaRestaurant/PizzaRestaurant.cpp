#include "PizzaRestaurant.hpp"
#include "DijonMustard.hpp"
#include "GarlicSauce.hpp"
#include "HeinzKetchup.hpp"

PizzaRestaurant::PizzaRestaurant()
{}

PizzaRestaurant::~PizzaRestaurant()
{
	std::unordered_map<std::string, ToppingsDecorator*>::iterator i;
	for (i = toppings.begin(); i != toppings.end(); ++i)
	{
		delete i->second;
	}
}

void PizzaRestaurant::initToppings(Pizza* pizza)
{
	toppings["Dijon mustard"] = new DijonMustard(pizza);
	toppings["Garlic sauce"] = new GarlicSauce(pizza);
	toppings["Heinz ketchup"] = new HeinzKetchup(pizza);
}

Pizza* PizzaRestaurant::addTopping(Pizza* pizza, std::string topping)
{
	this->initToppings(pizza);

	if (toppings.find(topping) != toppings.end())
	{
		return toppings[topping];
	}
	else
	{
		throw std::invalid_argument("A topping with name " + topping + " doesn't exist!");
	}
}

void PizzaRestaurant::showToppings()
{
	std::cout << "Dijon mustard\t1.90$" << std::endl;
	std::cout << "Garlic sauce\t1.90$" << std::endl;
	std::cout << "Heinz ketchup\t1.90$" << std::endl;

	std::cout << "Please, choose a topping by typing the name: ";
}