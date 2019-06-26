#include "Menu.hpp"
#include <iostream>

void Menu::showRestaurants()
{
	std::cout << "(1) Dominos" << std::endl;
	std::cout << "(2) MrPizza" << std::endl;
	std::cout << "Please, choose a restaurant by typing the number: "; 
}

void Menu::showDominos()
{
	std::cout << "Hawai /tomato sauce, mozzarella, smoked ham, pineapple/\t10.90$" << std::endl;
	std::cout << "Margaritta /tomato sauce, extra mozzarella/\t10.00$" << std::endl;
	std::cout << "Peperoni /tomato sauce, extra mozzarella, extra pepperoni/\t13.90$";
}

void Menu::showMrPizza()
{
	std::cout << "Hawai /italian dough, cream, smoked bacon, pineapple/\t13.90$" << std::endl;
	std::cout << "Margaritta /italian dough, tomato sauce, mozzarella, oregano/\t5.90$" << std::endl;
	std::cout << "Peperoni /italian dough, tomato sauce, mozzarella, spicy peperoni salami/\t9.90$";
}

void Menu::showToppings()
{
	std::cout << "Showing toppings..." << std::endl;
}