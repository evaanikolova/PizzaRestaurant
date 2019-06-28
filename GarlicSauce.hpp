#ifndef GARLICSAUCE_HPP
#define GARLICSAUCE_HPP

#include "ToppingsDecorator.hpp"

class GarlicSauce : public ToppingsDecorator
{
public:
	GarlicSauce() = default;
	GarlicSauce(Pizza* pizza);
	~GarlicSauce();

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	Pizza* pizza;
};

#endif