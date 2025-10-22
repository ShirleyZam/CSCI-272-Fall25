#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
	ostringstream oss; //output string stream
	
	string name = "Alice";
	int score = 95;
	double gpa = 3.876;
	
	//build a message 
	oss << "Student: " << name
		<<" | Score: " << score
		<<" | GPA: "<< fixed << setprecision(2) << gpa;
		
		//convert the stream into a string
		string message = oss.str(); //the variable holds the stream --> string
		
//		cout << message; 
//		OR 
		cout << oss.str() << endl;
}