#include "DominosPeperoni.hpp"

DominosPeperoni::DominosPeperoni() : description("Peperoni /tomato sauce, extra mozzarella, extra pepperoni/"), price(13.90)
{}

std::string DominosPeperoni::getDescription()
{
	return description;
}

double DominosPeperoni::getPrice()
{
	return price;
}