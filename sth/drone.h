#pragma once
class drone
{
protected:
	friend class droneList;
	drone* next;
	drone* prev;
private:
	int engine_rate;
	int baterry;
	int ceiling;
	int maxCargo;
	int realCargo;
	

	
public:
	drone();
	void checkcargo();
	void info();
	void increseCeiling(int newCeiling);
	void decreaseCeiling(int newCeiling);
};

