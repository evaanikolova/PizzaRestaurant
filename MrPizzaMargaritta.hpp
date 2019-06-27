#ifndef MRPIZZAMARGARITTA_HPP
#define MRPIZZAMARGARITTA_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class MrPizzaMargaritta : public Pizza
{
public:
	MrPizzaMargaritta();
	virtual ~MrPizzaMargaritta() = default;

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	std::string description;
	double price;
};

#endif