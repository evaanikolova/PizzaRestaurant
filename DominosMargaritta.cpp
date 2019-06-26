#include "DominosMargaritta.hpp"

DominosMargaritta::DominosMargaritta() : name("Margaritta /tomato sauce, extra mozzarella/"), price(10.00)
{}

std::string DominosMargaritta::getName()
{
	return name;
}

double DominosMargaritta::getPrice()
{
	return price;
}