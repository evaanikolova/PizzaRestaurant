#include "MrPizzaHawai.hpp"

MrPizzaHawai::MrPizzaHawai() : name("Hawai /italian dough, cream, smoked bacon, pineapple/"), price(13.90)
{}

std::string MrPizzaHawai::getName()
{
	return name;
}

double MrPizzaHawai::getPrice()
{
	return price;
}