#include "DominosRestaurant.hpp"
#include "DominosHawai.hpp"
#include "DominosMargaritta.hpp"
#include "DominosPeperoni.hpp"
#include <exception>

DominosRestaurant::DominosRestaurant() : mostOrderedPizza(nullptr)
{
	initPizzas();
}

DominosRestaurant::~DominosRestaurant()
{
	//delete mostOrderedPizza;
	std::unordered_map<std::string, Pizza*>::iterator i;
	for (i = pizzas.begin(); i != pizzas.end(); ++i)
	{
		delete i->second;
	}
}

void DominosRestaurant::initPizzas()
{
	pizzas["Hawai"] = new DominosHawai();
	pizzas["Margaritta"] = new DominosMargaritta();
	pizzas["Peperoni"] = new DominosPeperoni();
}

Pizza* DominosRestaurant::createPizza(std::string pizza)
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

Pizza* DominosRestaurant::getMostOrderedPizza()
{
	return new DominosMargaritta();
}

void DominosRestaurant::showMenu()
{
	std::cout << "Hawai /tomato sauce, mozzarella, smoked ham, pineapple/\t10.90$" << std::endl;
	std::cout << "Margaritta /tomato sauce, extra mozzarella/\t10.00$" << std::endl;
	std::cout << "Peperoni /tomato sauce, extra mozzarella, extra pepperoni/\t13.90$" << std::endl;

	std::cout << "Please, choose a pizza by typing the name: ";
}