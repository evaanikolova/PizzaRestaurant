#include "MrPizzaPeperoni.hpp"

MrPizzaPeperoni::MrPizzaPeperoni() : name("Peperoni /italian dough, tomato sauce, mozzarella, spicy peperoni salami/"), price(9.90)
{}

std::string MrPizzaPeperoni::getName()
{
	return name;
}

double MrPizzaPeperoni::getPrice()
{
	return price;
}