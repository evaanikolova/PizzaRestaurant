#include "DominosMargaritta.hpp"

DominosMargaritta::DominosMargaritta() : description("Margaritta /tomato sauce, extra mozzarella/"), price(10.00)
{}

std::string DominosMargaritta::getDescription()
{
	return description;
}

double DominosMargaritta::getPrice()
{
	return price;
}