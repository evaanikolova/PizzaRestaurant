#ifndef MRPIZZAPEPERONI_HPP
#define MRPIZZAPEPERONI_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class MrPizzaPeperoni : public Pizza
{
public:
	MrPizzaPeperoni();
	virtual ~MrPizzaPeperoni() = default;

	virtual std::string getName() override;
	virtual double getPrice() override;
private:
	std::string name;
	double price;
};

#endif