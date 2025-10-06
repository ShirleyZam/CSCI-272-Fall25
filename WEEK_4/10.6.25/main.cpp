#include "Car.h"
#include <iostream>

using namespace std;


int main(){
	//creating an object using default values
	Car car1;
	
	//Create a car object using parameters
	Car car2("Honda", "Civiv", 2024);
	
	//Car object using Copy Constructor
	Car car3(car2);
	
	car1.startEngine();
	car2.startEngine();
	car3.startEngine();
	
	//TThe destructor will automatically be called 
	
	return 0;
	
}