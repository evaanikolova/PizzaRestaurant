#include "Client.hpp"
#include <iostream>

int main()
{
	Client client;

	try
	{
		client.makeOrder();
	}
	catch (std::invalid_argument& ia)
	{
		std::cout << ia.what();
	}

	return 0;
}