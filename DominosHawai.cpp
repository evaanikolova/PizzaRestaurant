#include "DominosHawai.hpp"

DominosHawai::DominosHawai() : name("Hawai /tomato Sauce, mozzarella, smoked ham, pineapple/"), price(10.90)
{}

std::string DominosHawai::getName()
{
	return name;
}

double DominosHawai::getPrice()
{
	return price;
}