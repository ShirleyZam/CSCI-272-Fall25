#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//check the format (true or false) 
bool isValidPhoneNumber(const string& input);//creating a copy of the parameter

int main(){
	string input;
	
	do{
		cout << "Enter a U.S. Phone# (e.g., (800) 555 1212: ";
	
		getline(cin, input); //Reads the input
		
		if(!isValidPhoneNumber(input)){//if not true 
			cout << "Ivalid format, try again.\n";
		}
	} while(!isValidPhoneNumber(input));
	
	cout << "Valid Phone Number \n";
	
	
	//calling validation function 
	
//	if(isValidPhoneNumber(input)){
//		cout << "Valid." << endl;
//	} else {
//		cout << "Invalid format. Enter om (xxx) xxx-xxxx format." << endl;
//	}
	
	return 0; 
}

//function definition 

bool isValidPhoneNumber(const string& input){
	istringstream iss(input);
	char openParan, closeParen, dash;
	int areaCode, firstPart, secondPart; //(000) 111-2222
	
	//format
	if(iss >> openParan >> areaCode >> closeParen >> firstPart >> dash >> secondPart){
		//validation
		if (openParan == '(' && closeParen == ')' && dash == '-' && areaCode >= 100 && firstPart >= 100 && firstPart <= 999 && secondPart >= 1000 && secondPart <= 9999){
	
			return true;
		}
	}
	return false; 
	
}