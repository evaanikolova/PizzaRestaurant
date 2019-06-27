#include "PizzaRestaurant.hpp"
#include "DijonMustard.hpp"

PizzaRestaurant::PizzaRestaurant()
{
	initToppings();
}

void PizzaRestaurant::initToppings()
{
	toppings["Dijon mustard"] = new DijonMustard();
	//toppings["Garlic sauce"] = new MrPizzaMargaritta();
	//toppings["Heinz ketchup"] = new MrPizzaPeperoni();
}

Pizza* PizzaRestaurant::addTopping(Pizza* pizza, std::string topping)
{
	if (toppings.find(topping) != toppings.end())
	{
		toppings["Dijon mustard"] = new DijonMustard(pizza);
		return toppings[topping];
	}
	else
	{
		throw std::invalid_argument(topping + " doesn't exist!\n");
	}
}

void PizzaRestaurant::showToppings()
{
	std::cout << "Show toppings..." << std::endl;
}