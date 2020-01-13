#include "drone.h"
#include <iostream>

drone::drone()
{
	engine_rate = 0;
	baterry = 100;
	ceiling = 0;
	maxCargo = 1000;
	realCargo = maxCargo;

	next = nullptr;
	prev = nullptr;
	
	
}

void drone::checkcargo()
{
	if (0 < ceiling)
		realCargo = maxCargo / ceiling;
	else
		realCargo = maxCargo;
}

void drone::info()
{
	printf("Engine rate %d \nBaterry %d  \nCeiling %d \nReal Cargo %d \n", engine_rate, baterry, ceiling, realCargo);
}

void drone::increseCeiling(int newCeiling)
{

	if (0 < newCeiling)
	{
		ceiling += newCeiling;
		checkcargo();
	}
	else
		printf("Wrong Ceiling");


}

void drone::decreaseCeiling(int newCeiling)
{
	if (0 < ceiling-newCeiling)
	{
		ceiling -= newCeiling;
		checkcargo();
	}
	else
		printf("Wrong Ceiling");

}


