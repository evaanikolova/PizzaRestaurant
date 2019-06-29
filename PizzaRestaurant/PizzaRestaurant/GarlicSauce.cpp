#include "GarlicSauce.hpp"

GarlicSauce::GarlicSauce(Pizza* pizza)
{
	this->pizza = pizza;
}

GarlicSauce::~GarlicSauce()
{
	delete pizza;
}

std::string GarlicSauce::getDescription()
{
	return this->pizza->getDescription() + ", garlic sauce";
}

double GarlicSauce::getPrice()
{
	return this->pizza->getPrice() + 1.90;
}