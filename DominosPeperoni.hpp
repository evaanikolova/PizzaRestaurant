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

	virtual std::string getName() override;
	virtual double getPrice() override;
private:
	std::string name;
	double price;
};

#endif