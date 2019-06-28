#ifndef HEINZKETCHU_HPP
#define HEINZKETCHU_HPP

#include "ToppingsDecorator.hpp"

class HeinzKetchup : public ToppingsDecorator
{
public:
	HeinzKetchup() = default;
	HeinzKetchup(Pizza* pizza);
	~HeinzKetchup();

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	Pizza* pizza;
};

#endif