#ifndef DIJONMUSTARD_HPP
#define DIJONMUSTARD_HPP

#include "ToppingsDecorator.hpp"

class DijonMustard : public ToppingsDecorator
{
public:
	DijonMustard() = default;
	DijonMustard(Pizza* pizza);
	~DijonMustard();

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	Pizza * pizza;
};

#endif