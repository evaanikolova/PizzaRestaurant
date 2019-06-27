#include "DominosHawai.hpp"

DominosHawai::DominosHawai() : description("Hawai /tomato Sauce, mozzarella, smoked ham, pineapple/"), price(10.90)
{}

std::string DominosHawai::getDescription()
{
	return description;
}

double DominosHawai::getPrice()
{
	return price;
}