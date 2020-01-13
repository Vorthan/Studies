#include "list.h"
#include <iostream>
int main()
{
    
	droneList list;
	drone d1;
	drone d2;
	drone d3;

	
	list.addEnd(&d1);
	list.addEnd(&d2);
	list.addEnd(&d3);
	d1.IncreseCeiling(100);
	d2.IncreseCeiling(200);
	d3.IncreseCeiling(450);
	d3.DecreaseCeiling(100);
	list.printall();
	list.increaseCellingAll(100);


}


