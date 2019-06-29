#ifndef TOPPINGSDECORATOR_HPP
#define TOPPINGSDECORATOR_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class ToppingsDecorator : public Pizza
{
public:
	ToppingsDecorator() = default;
	virtual ~ToppingsDecorator() = default;

	virtual std::string getDescription() = 0;
	virtual double getPrice() = 0;
};

#endif