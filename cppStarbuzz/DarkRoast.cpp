#include "stdafx.h"
#include <iostream>

namespace starbuzz_beverage {

	class DarkRoast {
		char description[31] = "Unknown Beverage";
	public:
		virtual char* getDescription(void);
		virtual double cost(void) = 0;
	};

	char* Beverage::getDescription()
	{
		return description;
	}

}