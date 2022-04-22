#include "Cargo.h"

Cargo::Cargo(int id, CargoType T, double c, double load, double unload, int pred, int preh) {
	CargoID = id;
	cType = T;
	cost = c;
	LoadTime = load;
	UnloadTime = unload;
	PrepareDay = pred;
	PrepareHour = preh;
};

double Cargo::getCost()const {
	return cost;
}
double Cargo::getDelDistance() const {
	return DelDistance;
}
int Cargo::getLoadTime() const {
	return LoadTime;
}
int Cargo::getUnloadTime() const {
	return UnloadTime;
}
int Cargo::getPrepareDay() const {
	return PrepareDay;
}
int Cargo::getPrepareHour()const {
	return PrepareHour;
}
int Cargo::getCargoID() const {
	return CargoID;
}
CargoType Cargo::getCargoType() const {
	return cType;
}