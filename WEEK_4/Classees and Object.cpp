#include <iostream>
using namespace std;

class Car{
	private: //can be accessed within the class
		string brand{"Honda"};
		string model = "Civic";
		int year{2025};
		
	public:
		void startEngine(){
			cout << "Engine started for: "<< year <<" " << brand << " " << model << " " << endl;
			
		}
		
		void accelerate(){
			cout<< "Accelerate Engine for: " << model << endl;
			
		}
};

int main () { //creating object of the type of car
	Car car1;
//	car1.brand = "Honda";
//	car1.model = "Civic";
//	car1.year = 2025;
	car1.startEngine();		
	car1.accelerate();
	};
	