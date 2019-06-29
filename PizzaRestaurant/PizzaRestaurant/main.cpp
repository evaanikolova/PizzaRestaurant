#include "Client.hpp"
#include <iostream>

void welcome()
{
	std::cout << "\t\t\t\t\tVIRTUAL PIZZA\n";
	std::cout << "Hey! Welcome to our virtual ordering of pizza! Would you like to make an order? Type y or n: ";

	char command;
	std::cin >> command;

	if (command == 'y')
	{
		Client client;
		client.makeOrder();
	}
	else if (command == 'n')
	{
		std::cout << "Have a nice day!" << std::endl;
	}
	else
	{
		throw std::invalid_argument("You should type y or n!");
	}
}

int main()
{
	try
	{
		welcome();
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}

	return 0;
}