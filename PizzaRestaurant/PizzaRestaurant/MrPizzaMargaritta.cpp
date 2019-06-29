#include "MrPizzaMargaritta.hpp"

MrPizzaMargaritta::MrPizzaMargaritta() : description("Margaritta /italian dough, tomato sauce, mozzarella, oregano/"), price(5.90)
{}

std::string MrPizzaMargaritta::getDescription()
{
	return description;
}

double MrPizzaMargaritta::getPrice()
{
	return price;
}