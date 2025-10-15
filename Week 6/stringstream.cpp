//Midterm Code
#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string input;
	int number;
	
	cout << "Enter an integer between 0 and 100: ";
	cin >> input; //getting input :  raw stream
	
	// Good for checking when the program fails (doesnt crash)
	
	istringstream iss(input); // wrapping it in a stream, becomes a flow of bytes in memory 
	// we are creating a stream from string 
	
	if(iss >> number){ // checks if string is a number 
		if (number >= 0 && number <= 100)
			cout << "Valid input: " << number << endl;
		else // when the input is number but below 0 or whatever 100
			cout << number << "out of range!" << endl;
	} else { // when the input is not a number 
		cout << "Ivalid input (not an integer)" << endl;
	}
}