#include "MrPizzaHawai.hpp"

MrPizzaHawai::MrPizzaHawai() : description("Hawai /italian dough, cream, smoked bacon, pineapple/"), price(13.90)
{}

std::string MrPizzaHawai::getDescription()
{
	return description;
}

double MrPizzaHawai::getPrice()
{
	return price;
}