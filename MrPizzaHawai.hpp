#ifndef MRPIZZAHAWAI_HPP
#define MRPIZZAHAWAI_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class MrPizzaHawai : public Pizza
{
public:
	MrPizzaHawai();
	virtual ~MrPizzaHawai() = default;

	virtual std::string getName() override;
	virtual double getPrice() override;
private:
	std::string name;
	double price;
};

#endif