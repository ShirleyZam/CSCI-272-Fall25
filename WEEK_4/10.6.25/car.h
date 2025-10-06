#include<iostream>
#include<string>

using namespace std;

//define class name "car"

class Car {
	private:
		string brand = "Toyota";
		string model = "Camry";
		int year = 2022;
		
	public:
		//destructor: called when the object is destroyed 
		~Car(){
			cout << "Destructor called for car: "<<brand<<" "<< model<<" "<<year<<endl;
		}
		
		Car(){
			//this is default constructor (we cannot call an object without it)
		}
		
		//Copy Constructor
		Car(const Car&other){
			brand = other.brand;
			model = other.model;
			year = other.year + 1; //increment year by 1 
			
		}
		
		//Parameter Constructor
		Car(string b, string m, int y){
			brand = b;
			model = m;
			year = y;
			
		}
		
		//Member function
		//functionality of the car
		void startEngine(){
			cout<<"Start Engine "<< "Brand: " << brand <<  " | Model: "<< model << " | Year: " << year <<endl;
		}
		
		//memeber function to accelerate
		
		void accelerate(){
			cout<<"Start Engine "<< "Brand: " << brand <<  " | Model: "<< model << " | Year: " << year <<endl; 

		}
};