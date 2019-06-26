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

	virtual std::string getName() override;
	virtual double getPrice() override;
private:
	std::string name;
	double price;
};

#endif