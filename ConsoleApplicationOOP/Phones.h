#pragma once
#include "GoodBasic.h"
class Phones : public GoodBasic
{
private:
	double ozu_memory;
	int cores;
public:
	Phones();
	Phones(int id, int price, string name, string description, double ozu_memory, int cores);

	double getOzu_memory();

	void setOzu_memory(double newOzu_memory);

	int getCores();

	void setCores(int newCores);

	string getType();

	void setType(string newType);

	void toString();
};

