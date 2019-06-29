#include "MrPizzaPeperoni.hpp"

MrPizzaPeperoni::MrPizzaPeperoni() : description("Peperoni /italian dough, tomato sauce, mozzarella, spicy peperoni salami/"), price(9.90)
{}

std::string MrPizzaPeperoni::getDescription()
{
	return description;
}

double MrPizzaPeperoni::getPrice()
{
	return price;
}