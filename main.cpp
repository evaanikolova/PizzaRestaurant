#include "Client.hpp"
#include "Pizza.hpp"
//#include "DominosMargaritta.hpp"
//#include "MrPizzaMargaritta.hpp"
//#include "PizzaRestaurant.hpp"
#include "DominosRestaurant.hpp"
#include "MrPizzaRestaurant.hpp"
#include <iostream>

int main()
{
	Client client;

	client.showMenu();

	/*Pizza* dominosPizza = new DominosMargaritta();
	std::cout << dominosPizza->getName() << " " << dominosPizza->getPrice();

	delete dominosPizza;

	dominosPizza = new MrPizzaMargaritta();
	std::cout << dominosPizza->getName() << " " << dominosPizza->getPrice();

	delete dominosPizza;*/

	/*Pizza* createdPizza;
	PizzaRestaurant* restaurant = new DominosRestaurant();
	//PizzaRestaurant* restaurant = new MrPizzaRestaurant();
	try
	{
		createdPizza = restaurant->createPizza("Peperoni");
	}
	catch(std::invalid_argument& ia)
	{
		std::cout << ia.what();
		return 0;
	}

	std::cout << createdPizza->getName() << createdPizza->getPrice() << std::endl;

	restaurant = new MrPizzaRestaurant();
	try
	{
		createdPizza = restaurant->createPizza("Peperoni");
	}
	catch(std::invalid_argument& ia)
	{
		std::cout << ia.what();
		return 0;
	}

	std::cout << createdPizza->getName() << createdPizza->getPrice() << std:: endl;*/

	return 0;
}