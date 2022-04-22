#pragma once
#include<iostream>
using namespace std;

enum TruckType {
		VT, //VIP truck
		ST, // special truck
		NT // Normal truck
	};

class Truck {
private : 
	
	int TCapacity; //truck capacity
	int MaintenaceT;
	double speed;
	double DI; //delievry interval
};