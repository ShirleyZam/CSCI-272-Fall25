//STREAMS

//#include<iostream>
//using namespace std;
//int main(){
//	int number;
//	
//	cout<<"Entern a number: "<<endl;
//	cin>>number;
//	cout<<"You entered: "<<number<<endl;
//	
//	cerr<<"This is an error message. \n"; //error message | warning
//	clog<<"This is a log message. "; //log message | notes 
//}

//#include<iostream>
//#include<iomanip>//IOMANIP to format the output 
//using namespace std;
//
//int main(){
//	string item = "Coffee";
//	double pi = 3.14159;
//	double price = 2.5;
//	double tax = 0.20;
//	double total = price + tax;
//	
//	cout << setw(10) << left << "Item" << setw(10) << right << "Price" <<endl; 
//	cout << setw(10) << left << item << setw(10) << right << fixed << setprecision(2) << total << endl; //shows two decimal points 
//	cout << setw(10) << left << "Pi Value" << setw(10) << right << fixed << setprecision(4) << pi << endl;
//}


//#include <iostream>
//#include <string>
//#include <limits>
//
//using namespace std;
//
//int main(){
//	cout << "Enter a character: ";
//	char ch = cin.get();//reads one char, even a space
//	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore all the buffers, ignore all the \n 
//	
//	cout << "You entered: "<< ch << endl;
//	
//	cout <<"Enter your full name: ";
//	string name;
//	getline(cin, name); // reads entire line
//	cout << "Hello, "<<name<< "!\n";
//	
//}

//#include <iostream>
//
//using namespace std;
//
//class Card{
//	public:
//		int cardNumber;
//		string cardHolder;
//};
//
//typedef int Fun;
//
////typedef alias CardPtr for the Card* 
//
//typedef Card* CardPtr; //access the object without calling the object itself 
//
//int main(){
//	//Create a new card object and a CardPtr pointing to it
//	
//	Card myCard;
//	
//	Fun x = 2022;
//	
//	myCard.cardNumber = 12345;
//	myCard.cardHolder = "Mr.X";
//	
//	CardPtr ptrToCard = &myCard; //access the pointer
//	
//	//access the card information using the pointer 
//	
//	cout << "Card number: " << ptrToCard->cardNumber << endl; 
//	cout << "Card holder: " << ptrToCard->cardHolder << endl;
//	cout << x <<endl;
//}

#include <iostream>
#include <string>

using namespace std;

int main(){
	double pi = 3.141592625359;
	
	//convert double to a string
	string strValue = to_string(pi); 
	
	const char* charPtr = strValue.c_str(); //gives the pointer to an internal array 
	
	//print the double nad char*
	cout<<"Double: "<<pi<<endl;
	cout<<"char*: ";
	cout.write(charPtr, 7)<<endl;
	
	return 0;
}
