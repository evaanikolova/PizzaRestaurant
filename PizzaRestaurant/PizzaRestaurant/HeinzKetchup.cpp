#include "HeinzKetchup.hpp"

HeinzKetchup::HeinzKetchup(Pizza* pizza)
{
	this->pizza = pizza;
}

std::string HeinzKetchup::getDescription()
{
	return this->pizza->getDescription() + ", heinz ketchup";
}

double HeinzKetchup::getPrice()
{
	return this->pizza->getPrice() + 1.90;
}