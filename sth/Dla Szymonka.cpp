#include "list.h"
#include <iostream>
int main()
{

	droneList list;


	
	int a, pomoc;
	for (; 0 < 1;)
	{
		drone* tab;
		drone* ptr;
		std::cin >> a;
		switch (a)
		{
		case 1:

			std::cin >> pomoc;
			tab = new drone[pomoc];
			for (int i = 0; i < pomoc; i++)
				list.addEnd(&tab[i]);
			break;
		case 2:
			break;
		case 3:
			std::cin >> pomoc;
			ptr = list.searchDrone(pomoc);
			std::cin >> pomoc;
			ptr->increseCeiling(pomoc);
			break;
		case 4:
			std::cin >> pomoc;
			ptr = list.searchDrone(pomoc);
			std::cin >> pomoc;
			ptr->decreaseCeiling(pomoc);
			break;
		case 5:
			std::cin >> pomoc;
			ptr = list.searchDrone(pomoc);
			std::cin >> pomoc;
			ptr->info();
			break;
		case 6:
			std::cin >> pomoc;
			list.decreaseCellingAll(pomoc);
			break;
			break;
		case 7:
			std::cin >> pomoc;
			list.increseCellingAll(pomoc);
			break;
		case 8:
			return 0;
			break;
		case 9:
			list.printall();
		default:
			break;


		}

	}
}


