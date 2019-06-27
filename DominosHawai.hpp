#ifndef DOMINOSHAWAI_HPP
#define DOMINOSHAWAI_HPP

#include "Pizza.hpp"
#include <iostream>
#include <string>

class DominosHawai : public Pizza
{
public:
	DominosHawai();
	virtual ~DominosHawai() = default;

	virtual std::string getDescription() override;
	virtual double getPrice() override;
private:
	std::string description;
	double price;
};

#endif