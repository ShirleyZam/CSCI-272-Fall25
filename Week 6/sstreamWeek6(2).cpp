//#include <iostream>
//#include <sstream>
//#include <iomanip>
//
//using namespace std;
//
//int main(){
//	ostringstream oss; //output string stream (oss is a variable)
//	
//	string name = "Alice";
//	int score = 95;
//	double gpa = 3.876;
//	
//	//build a message 
//	oss << "Student: " << name
//		<<" | Score: " << score
//		<<" | GPA: "<< fixed << setprecision(2) << gpa;
//		
//		//convert the stream into a string
//		string message = oss.str(); //the variable holds the stream --> string
//		
////		cout << message; 
////		OR 
//		cout << oss.str() << endl;
//}
//
//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int main(){
//	string input = "100 3.5";
//	istringstream iss(input); //stream containing 100 and 3.5 
//	
//	int quantity; //integer
//	double price; //double 0.00
//	
//	iss >> quantity >> price; // reads the stream left to right 
//	
//	cout << "Total cost: " << (quantity * price) << endl; 
//	cout << quantity << endl;
//	cout << price << endl;
//	
//	return 0; 
//
//}


//fail() and clear() ::::
//
//#include <iostream>
//#include <sstream>
//
//using namespace std; 
//
//int main(){
//	string data = "7 ate 9"; // int string int 
//	istringstream iss(data); // creating input string stream object named iss

//	int value; // 7 and 9 
//	while(iss >> value){
//		cout << "Read int: " << value << endl;
//	}
//	
//	// when a bad token stops extraction
//	if(iss.fail()){
//		cout<< "stream failed. Skipping bad token..." << endl;
//		iss.clear(); //clearning fail state
//		string bad; // the string 
//		iss >> bad;
////		cout << bad; //prints out the "ate"
//	}
//	
//	//resume reading next values 
//	
//	while (iss >> value){
//		cout << "Read int: " << value << endl;
//	}
//}

// fail(), eof(), clear():: 

#include <iostream>
#include<sstream>

using namespace std; 

int main(){
	string data{"Input Test 123 4.7 A"};
	
	istringstream iss(data); 
	
	string exString1;
	string exString2;
	int exInt;
	double exDouble; 
	char exChar; 
	
	iss >> exString1 >> exString2 >> exInt >> exDouble >> exDouble >> exChar; 
	
	cout << "The following items were extracted from the istringstream object:"
		<<"\nString: " << exString1
		<<"\nString: " << exString2
		<<"\n	int: " << exInt
		<<"\ndouble: " << exDouble
		<<"\n char: " << exchar <<endl;
		
		//Let's attempt to read more even though the string its completed
		
		long value;
		iss >> value;
		
		if (iss.good()){
			cout<< "Value is: " << value << endl;
		}else{
			cout << "\n ISS is empty" <<endl; 
		}
		}
	
	
