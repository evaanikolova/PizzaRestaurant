#include "MrPizzaRestaurant.hpp"
#include "MrPizzaHawai.hpp"
#include "MrPizzaMargaritta.hpp"
#include "MrPizzaPeperoni.hpp"
#include <exception>

MrPizzaRestaurant::MrPizzaRestaurant() : mostOrderedPizza(nullptr)
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
	std::cout << "Hawai /italian dough, cream, smoked bacon, pineapple/\t13.90$" << std::endl;
	std::cout << "Margaritta /italian dough, tomato sauce, mozzarella, oregano/\t5.90$" << std::endl;
	std::cout << "Peperoni /italian dough, tomato sauce, mozzarella, spicy peperoni salami/\t9.90$" << std::endl;

	std::cout << "Please, choose a pizza by typing the name: ";
}