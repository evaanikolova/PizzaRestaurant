#ifndef DOMINOSMARGARITTA_HPP
#define DOMINOSMARGARITTA_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class DominosMargaritta : public Pizza
{
public:
	DominosMargaritta();
	virtual ~DominosMargaritta() = default;

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	std::string description;
	double price;
};

#endif