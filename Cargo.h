#pragma once
#include <iostream>
using namespace std;

enum CargoType {
		VIPcar,
		specialCar,
		normalCar
	};

class Cargo {
private :
	int CargoID;
	

	CargoType cType;
	double cost;
	double DelDistance; //delivery distance
	int LoadTime, UnloadTime;
	int PrepareDay, PrepareHour;

public :
	Cargo() {};
	Cargo(int ID, CargoType T, double cost, double load, double unload,int pred, int preh) {};
	double getCost()const {}
	double getDelDistance() const{}
	int getLoadTime() const {}
	int getUnloadTime() const{}
	int getPrepareDay() const {}
	int getPrepareHour() const {}
	int getCargoID() const{}
	CargoType getCargoType() const {}
};