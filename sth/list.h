#pragma once
#pragma once 
#include "drone.h"
#include <fstream>
#include <iostream>

class droneList {
private:
	drone* m_begin;
	drone* m_end;
	int m_size;
public:
	droneList();
	~droneList();
	int getSize();
	void addBegin(drone* droneptr);
	void addEnd(drone* droneptr);
	void info();
	void printall();
	drone* searchDrone(int number);
	void removeall();
	int remove(drone* ptr);
	drone* getBegin() { return m_begin; };
	drone* getEnd() { return m_end; };
	drone* getNext(drone* ptr) { return ptr->next; };
	drone* getPrev(drone* ptr) { return ptr->prev; };
};

