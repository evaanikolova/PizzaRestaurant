#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>

class Pizza
{
public:
	Pizza() = default;
	~Pizza() = default;

	virtual std::string getDescription() = 0;
	virtual double getPrice() = 0;
};

#endif