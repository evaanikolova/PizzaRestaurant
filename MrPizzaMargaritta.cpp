#include "MrPizzaMargaritta.hpp"

MrPizzaMargaritta::MrPizzaMargaritta() : name("Margaritta /italian dough, tomato sauce, mozzarella, oregano/"), price(5.90)
{}

std::string MrPizzaMargaritta::getName()
{
	return name;
}

double MrPizzaMargaritta::getPrice()
{
	return price;
}