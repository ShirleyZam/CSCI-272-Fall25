#include <iostream>
#include <string>
#include <sstream>

using namespace std;
//
//class Person {
//	public:
//		string name;
//		int age;
//};
//
//int main(){
//	string inputString = "Alice 30";
//
//	istringstream input(inputString);
//
//	Person person;
//	input >> person.name >> person.age;
//	cout << "Name: "<< person.name << endl;
//	cout << "Age: " << person.age << endl;
//
//	return 0;
//}

int main(){
	const int SIZE = 80;
	char buffer[SIZE];
	
	cout << "Enter a sentence: \n";
	cin.read(buffer,20); // reading 20 char (FAILSAFE)
	
	cout << "\n The input is: \n";
	cout.write(buffer, cin.gcount()); // show the input
	cout << endl;
	cout << "Input # of char: " << cin.gcount() << endl;
	
	return 0; 
}