#include "list.h"


//test
droneList::droneList()
{
	m_begin = m_end = nullptr;
	m_size = 0;
}

droneList::~droneList()
{
	printf("destruktor\n");
	//removeall();
}

void droneList::removeall()
{
	if (m_size == 0)
		return;
	printf("removing\n");
	//info();
	drone* ptr;
	int freed = 0;
	for (ptr = m_begin; ptr != nullptr; ptr = ptr->next)
	{
		if (ptr->next != nullptr)
		{
			delete ptr->prev;
		}
		else
		{
			delete ptr;
		}
		freed++;
	}
	m_begin = m_end = nullptr;
	m_size = 0;
	printf("\nremoved %d records,freed %ld bytes\n", freed, freed * sizeof(drone));
}

int droneList::getSize()
{
	return m_size;
}

void droneList::addBegin(drone* droneptr)
{

	droneptr->next = m_begin;
	droneptr->prev = nullptr;
	m_begin = droneptr;

	if (m_end == nullptr)
	{
		m_end = droneptr;
	}
	else
		droneptr->next->prev = droneptr;

	m_size++;
}

void droneList::addEnd(drone* droneptr)
{

	droneptr->prev = m_end;
	droneptr->next = nullptr;
	m_end = droneptr;

	if (m_begin == nullptr)
	{
		m_begin = droneptr;
	}
	else
		droneptr->prev->next = droneptr;

	m_size++;
}

void droneList::info()
{

	printf("\nbegin = %p, end = %p\n", m_begin, m_end);
}
void droneList::printall()
{
	drone* ptr = m_begin;
	for (ptr = m_begin; ptr; ptr = ptr->next)
	{
		//printf("this = %p, prev = %p, next = %p\n", ptr, ptr->prev, ptr->next);
		ptr->info();
	}
}

drone* droneList::searchDrone(int number)
{
	drone* ptr = m_begin;
	for (int i = 0; i<number; i++)
		ptr = ptr->next;
	return ptr;
}

int droneList::remove(drone* ptr)
{
	if (ptr->next == nullptr)
	{
		m_end = ptr->prev;
		ptr->next = ptr;
	}
	else
		ptr->next->prev = ptr->prev;
	if (ptr->prev == nullptr)
	{
		m_begin = ptr->next;
		ptr->prev = ptr;
	}
	else
		ptr->prev->next = ptr->next;
	printf("%p\n", ptr);
	free(ptr);
	m_size--;
	return m_size;
}

