#ifndef DOMINOSPEPERONI_HPP
#define DOMINOSPEPERONI_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class DominosPeperoni : public Pizza
{
public:
	DominosPeperoni();
	virtual ~DominosPeperoni() = default;

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	std::string description;
	double price;
};

#endif