#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PizzaRestaurant/Client.hpp"
#include "../PizzaRestaurant/Client.cpp"
#include "../PizzaRestaurant/DijonMustard.hpp"
#include "../PizzaRestaurant/DijonMustard.cpp"
#include "../PizzaRestaurant/DominosHawai.hpp"
#include "../PizzaRestaurant/DominosHawai.cpp"
#include "../PizzaRestaurant/DominosMargaritta.hpp"
#include "../PizzaRestaurant/DominosMargaritta.cpp"
#include "../PizzaRestaurant/DominosPeperoni.hpp"
#include "../PizzaRestaurant/DominosPeperoni.cpp"
#include "../PizzaRestaurant/DominosRestaurant.hpp"
#include "../PizzaRestaurant/DominosRestaurant.cpp"
#include "../PizzaRestaurant/GarlicSauce.hpp"
#include "../PizzaRestaurant/GarlicSauce.cpp"
#include "../PizzaRestaurant/HeinzKetchup.hpp"
#include "../PizzaRestaurant/HeinzKetchup.cpp"
#include "../PizzaRestaurant/MrPizzaHawai.hpp"
#include "../PizzaRestaurant/MrPizzaHawai.cpp"
#include "../PizzaRestaurant/MrPizzaMargaritta.hpp"
#include "../PizzaRestaurant/MrPizzaMargaritta.cpp"
#include "../PizzaRestaurant/MrPizzaPeperoni.hpp"
#include "../PizzaRestaurant/MrPizzaPeperoni.cpp"
#include "../PizzaRestaurant/MrPizzaRestaurant.hpp"
#include "../PizzaRestaurant/MrPizzaRestaurant.cpp"
#include "../PizzaRestaurant/Pizza.hpp"
#include "../PizzaRestaurant/ToppingsDecorator.hpp"
#include "../PizzaRestaurant/PizzaRestaurant.hpp"
#include "../PizzaRestaurant/PizzaRestaurant.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unitTests
{		
	TEST_CLASS(PizzaRestaurantTest)
	{
	public:
		
		TEST_METHOD(PizzaRestaurantCreatePizzaDominosHawaiTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();
			
			std::string pizzaName = "Hawai";
			Pizza* pizza = restaurant->createPizza(pizzaName);
			
			std::string hawaiDescription = "Hawai /tomato sauce, mozzarella, smoked ham, pineapple/";
			std::string description = pizza->getDescription();
			
			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaDominosMargarittaTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			std::string pizzaName = "Margaritta";
			Pizza* pizza = restaurant->createPizza(pizzaName);

			std::string hawaiDescription = "Margaritta /tomato sauce, extra mozzarella/";
			std::string description = pizza->getDescription();

			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaDominosPeperoniTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			std::string pizzaName = "Peperoni";
			Pizza* pizza = restaurant->createPizza(pizzaName);

			std::string hawaiDescription = "Peperoni /tomato sauce, extra mozzarella, extra pepperoni/";
			std::string description = pizza->getDescription();

			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaMrPizzaHawaiTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			std::string pizzaName = "Hawai";
			Pizza* pizza = restaurant->createPizza(pizzaName);

			std::string hawaiDescription = "Hawai /italian dough, cream, smoked bacon, pineapple/";
			std::string description = pizza->getDescription();

			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaMrPizzaMargarittaTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			std::string pizzaName = "Margaritta";
			Pizza* pizza = restaurant->createPizza(pizzaName);

			std::string hawaiDescription = "Margaritta /italian dough, tomato sauce, mozzarella, oregano/";
			std::string description = pizza->getDescription();

			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaMrPizzaPeperoniTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			std::string pizzaName = "Peperoni";
			Pizza* pizza = restaurant->createPizza(pizzaName);

			std::string hawaiDescription = "Peperoni /italian dough, tomato sauce, mozzarella, spicy peperoni salami/";
			std::string description = pizza->getDescription();

			Assert::AreEqual(hawaiDescription, description);
		}

		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardDominosHawaiTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosHawai = new DominosHawai();
			std::string descriptionBeforeTopping = dominosHawai->getDescription();

			std::string topping = "Dijon mustard";
			dominosHawai = restaurant->addTopping(dominosHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = dominosHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardDominosMargarittaTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosMargaritta = new DominosMargaritta();
			std::string descriptionBeforeTopping = dominosMargaritta->getDescription();

			std::string topping = "Dijon mustard";
			dominosMargaritta = restaurant->addTopping(dominosMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = dominosMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardDominosPeperoniTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosPeperoni = new DominosPeperoni();
			std::string descriptionBeforeTopping = dominosPeperoni->getDescription();

			std::string topping = "Dijon mustard";
			dominosPeperoni = restaurant->addTopping(dominosPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = dominosPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}


		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardMrPizzaHawaiTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaHawai = new MrPizzaHawai();
			std::string descriptionBeforeTopping = mrPizzaHawai->getDescription();

			std::string topping = "Dijon mustard";
			mrPizzaHawai = restaurant->addTopping(mrPizzaHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = mrPizzaHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardMrPizzaMargarittaTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaMargaritta = new MrPizzaMargaritta();
			std::string descriptionBeforeTopping = mrPizzaMargaritta->getDescription();

			std::string topping = "Dijon mustard";
			mrPizzaMargaritta = restaurant->addTopping(mrPizzaMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = mrPizzaMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingDijonMustardMrPizzaPeperoniTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaPeperoni = new MrPizzaPeperoni();
			std::string descriptionBeforeTopping = mrPizzaPeperoni->getDescription();

			std::string topping = "Dijon mustard";
			mrPizzaPeperoni = restaurant->addTopping(mrPizzaPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", dijon mustard";
			std::string descriptionAfterTopping = mrPizzaPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceDominosHawaiTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosHawai = new DominosHawai();
			std::string descriptionBeforeTopping = dominosHawai->getDescription();

			std::string topping = "Garlic sauce";
			dominosHawai = restaurant->addTopping(dominosHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = dominosHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceDominosMargarittaTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosMargaritta = new DominosMargaritta();
			std::string descriptionBeforeTopping = dominosMargaritta->getDescription();

			std::string topping = "Garlic sauce";
			dominosMargaritta = restaurant->addTopping(dominosMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = dominosMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceDominosPeperoniTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosPeperoni = new DominosPeperoni();
			std::string descriptionBeforeTopping = dominosPeperoni->getDescription();

			std::string topping = "Garlic sauce";
			dominosPeperoni = restaurant->addTopping(dominosPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = dominosPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}


		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceMrPizzaHawaiTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaHawai = new MrPizzaHawai();
			std::string descriptionBeforeTopping = mrPizzaHawai->getDescription();

			std::string topping = "Garlic sauce";
			mrPizzaHawai = restaurant->addTopping(mrPizzaHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = mrPizzaHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceMrPizzaMargarittaTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaMargaritta = new MrPizzaMargaritta();
			std::string descriptionBeforeTopping = mrPizzaMargaritta->getDescription();

			std::string topping = "Garlic sauce";
			mrPizzaMargaritta = restaurant->addTopping(mrPizzaMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = mrPizzaMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingGarlicSauceMrPizzaPeperoniTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaPeperoni = new MrPizzaPeperoni();
			std::string descriptionBeforeTopping = mrPizzaPeperoni->getDescription();

			std::string topping = "Garlic sauce";
			mrPizzaPeperoni = restaurant->addTopping(mrPizzaPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", garlic sauce";
			std::string descriptionAfterTopping = mrPizzaPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupDominosHawaiTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosHawai = new DominosHawai();
			std::string descriptionBeforeTopping = dominosHawai->getDescription();

			std::string topping = "Heinz ketchup";
			dominosHawai = restaurant->addTopping(dominosHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = dominosHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupDominosMargarittaTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosMargaritta = new DominosMargaritta();
			std::string descriptionBeforeTopping = dominosMargaritta->getDescription();

			std::string topping = "Heinz ketchup";
			dominosMargaritta = restaurant->addTopping(dominosMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = dominosMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupDominosPeperoniTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();

			Pizza* dominosPeperoni = new DominosPeperoni();
			std::string descriptionBeforeTopping = dominosPeperoni->getDescription();

			std::string topping = "Heinz ketchup";
			dominosPeperoni = restaurant->addTopping(dominosPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = dominosPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}


		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupMrPizzaHawaiTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaHawai = new MrPizzaHawai();
			std::string descriptionBeforeTopping = mrPizzaHawai->getDescription();

			std::string topping = "Heinz ketchup";
			mrPizzaHawai = restaurant->addTopping(mrPizzaHawai, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = mrPizzaHawai->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupMrPizzaMargarittaTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaMargaritta = new MrPizzaMargaritta();
			std::string descriptionBeforeTopping = mrPizzaMargaritta->getDescription();

			std::string topping = "Heinz ketchup";
			mrPizzaMargaritta = restaurant->addTopping(mrPizzaMargaritta, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = mrPizzaMargaritta->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantAddToppingHeinzKetchupMrPizzaPeperoniTest)
		{
			PizzaRestaurant* restaurant = new MrPizzaRestaurant();

			Pizza* mrPizzaPeperoni = new MrPizzaPeperoni();
			std::string descriptionBeforeTopping = mrPizzaPeperoni->getDescription();

			std::string topping = "Heinz ketchup";
			mrPizzaPeperoni = restaurant->addTopping(mrPizzaPeperoni, topping);

			std::string toppingDescription = descriptionBeforeTopping + ", heinz ketchup";
			std::string descriptionAfterTopping = mrPizzaPeperoni->getDescription();

			Assert::AreEqual(toppingDescription, descriptionAfterTopping);
		}

		TEST_METHOD(PizzaRestaurantCreatePizzaExceptionTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();
			std::string pizzaName = "WRONG";
			bool flag = false;

			try
			{
				Pizza* pizza = restaurant->createPizza(pizzaName);
			}
			catch (std::invalid_argument& ia)
			{
				flag = true;
			}

			Assert::IsTrue(flag);
		}

		TEST_METHOD(PizzaRestaurantAddToppingExceptionTest)
		{
			PizzaRestaurant* restaurant = new DominosRestaurant();
			Pizza* pizza = new DominosHawai();

			std::string topping = "WRONG";
			bool flag = false;

			try
			{
				pizza = restaurant->addTopping(pizza, topping);
			}
			catch (std::invalid_argument& ia)
			{
				flag = true;
			}

			Assert::IsTrue(flag);
		}
	};
}