//#include<iostream>
//
//using namespace std; 
//
////.h file
//class MyNumber{
//	private:
//		int value; //internal stored int
//	
//	public: 
//	//constructor
//	myNumber(int val = 0){
//		value = val; 
//	}
//	// getter to read the stored value 
//	int getValue() const{
//		return value;
//	}
//	
//	//overload minus : -num 
//	//this will not change the original object 
//	MyNumber operator-() const{
//		return MyNumber(-value); 
//	}
//	
//	//overload the prefix ++ : ++ number
//	//this will change the current value because increment value
//	MyNumber operator++() {
//		++value; //increase the stored value by 1
//		return MyNumber(value)
//	}
//};
//
////main.cpp
//
//int main(){
//	MyNumber num(5);
//	
//	cout << "Original Value: " << num.getValue() << endl; 
//	//use overloaded urnary minus
//	MyNumber negative = -num //call the MyNumber::operator-()
//	cout << "After applying -num: " << negative.getValue() << endl; // represents the 5 as a negative number
//	//use overloaded prefix ++
//	MyNumber incremented = ++num;
//	cout << "After applying ++: " << num.getValue() << endl; // 6
//	cout << "Value returned by the ++num: " << incremented.getValue() << endl;
//	
//	return 0;
//	
//	
//}

#include <iostream>
using namespace std;

class Integer{
	private:
		int value;// actual int we are wrapping 
	public:
		//constructor
		Integer(int val = 0){
			value = val;
		}
		
		//getter
		int getValue() const{
			return value;
		}
		
		//overload the + to add two integers object 
		//ex. Integer c = a + b
		Integer operator+(const Integer& other) const {
			//create a new int whose value is the sum of both 
			return Integer(this->value + other.value);
		}
};

//main.cpp

int main(){
	Integer num1(6);
	Integer num2(7);
	
	//calls num1.operator+(num2) 
	Integer sum = num1+num2;
	
	cout << "num1: " << num1.getValue() << endl;
	cout << "num2: " << num2.getValue() << endl;
	
	cout << "Sum (num1+num2): " << sum.getValue() << endl;
}