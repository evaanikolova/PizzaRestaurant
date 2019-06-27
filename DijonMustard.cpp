#include "DijonMustard.hpp"

DijonMustard::DijonMustard(Pizza* pizza)
{
	this->pizza = pizza;
}

DijonMustard::~DijonMustard()
{
	delete pizza;
}

std::string DijonMustard::getDescription()
{
	return this->pizza->getDescription() + ", dijon mustard";
}

double DijonMustard::getPrice()
{
	return this->pizza->getPrice() + 1.99;
}