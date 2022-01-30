#include "Phones.h"

Phones::Phones() :
	GoodBasic{ 0,1, "noname", "nodescription" } {
	ozu_memory = 2;
	cores = 2;
}

double Phones::getOzu_memory() {
	return ozu_memory;
}

void Phones::setOzu_memory(double newOzu_memory) {
	if (newOzu_memory <= 0 || newOzu_memory > 24) {
		ozu_memory = 2;
	}
	else {
		ozu_memory = newOzu_memory;
	}
}

int Phones::getCores() {
	return cores;
}

void Phones::setCores(int newCores) {
	if (newCores <= 0 || newCores > 64) {
		ozu_memory = 4;
	}
	else {
		ozu_memory = newCores;
	}
}
void Phones::toString() {
	cout << "toString From Phones:" << getItemId() << " " << getPrice()
		<< " " << getName() << " " << getDescription() << " Ozu memory:"
		<< getOzu_memory() << "  Cores:" << getCores() << "\n";
}

