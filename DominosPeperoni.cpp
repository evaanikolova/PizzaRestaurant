#include "DominosPeperoni.hpp"

DominosPeperoni::DominosPeperoni() : name("Peperoni /tomato sauce, extra mozzarella, extra pepperoni/"), price(13.90)
{}

std::string DominosPeperoni::getName()
{
	return name;
}

double DominosPeperoni::getPrice()
{
	return price;
}