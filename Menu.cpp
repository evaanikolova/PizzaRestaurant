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
	std::cout << "Showing Dominos menu..." << std::endl;
}

void Menu::showMrPizza()
{
	std::cout << "Showing Mr.Pizza menu..." << std::endl;
}

void Menu::showToppings()
{
	std::cout << "Showing toppings..." << std::endl;
}