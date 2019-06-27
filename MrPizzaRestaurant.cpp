#include "MrPizzaRestaurant.hpp"
#include "MrPizzaHawai.hpp"
#include "MrPizzaMargaritta.hpp"
#include "MrPizzaPeperoni.hpp"
#include <exception>

MrPizzaRestaurant::MrPizzaRestaurant() : PizzaRestaurant(), mostOrderedPizza(nullptr)
{
	initPizzas();
}

MrPizzaRestaurant::~MrPizzaRestaurant()
{
	//delete mostOrderedPizza;
	std::unordered_map<std::string, Pizza*>::iterator i;
	for (i = pizzas.begin(); i != pizzas.end(); ++i)
	{
		delete i->second;
	}
}

void MrPizzaRestaurant::initPizzas()
{
	pizzas["Hawai"] = new MrPizzaHawai();
	pizzas["Margaritta"] = new MrPizzaMargaritta();
	pizzas["Peperoni"] = new MrPizzaPeperoni();
}

Pizza* MrPizzaRestaurant::createPizza(std::string pizza)
{
	if (pizzas.find(pizza) != pizzas.end())
	{
		return pizzas[pizza];
	}
	else
	{
		throw std::invalid_argument(pizza + " doesn't exist!");
	}
}

Pizza* MrPizzaRestaurant::getMostOrderedPizza()
{
	return new MrPizzaMargaritta();
}

void MrPizzaRestaurant::showMenu()
{
	std::unordered_map<std::string, Pizza*>::iterator i;
	for (i = pizzas.begin(); i != pizzas.end(); ++i)
	{
		std::cout << i->second->getDescription() << "\t" << i->second->getPrice() << "$" << std::endl;
	}

	std::cout << "Please, choose a pizza by typing the name: ";
}