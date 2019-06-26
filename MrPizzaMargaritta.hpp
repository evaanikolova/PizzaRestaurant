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

	virtual std::string getName() override;
	virtual double getPrice() override;
private:
	std::string name;
	double price;
};

#endif