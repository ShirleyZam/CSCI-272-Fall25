#include <iostream>
#include <fstream> //files
#include <cstdlib> // for exit ()

using namespace std;

int main(){
	ofstream outClientFile("section1.txt", ios::out);
	
	//checks if file exists
	//if not, show warning
	if(!outClientFile){
		cerr << "File could not be opened.\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "Enter account, name, and balance.(space seperated)\n"
		 << "Sample: 100 Shirley 100.20\n"
		 << "Enter EOF (Ctrl+Z in windows / Ctrl+D in Mac/Linux) to end.\n?";
		 
	int account;
	string name;
	double balance;
	
	while(true){
		if (cin >> account >> name >> balance){
			outClientFile << account << ' ' << name << ' ' << balance << endl; //saves into the variable (FILE)
			cout << "?";
		} else if (cin.eof()){
			//End of file input 
			cout << "\nEnd of file reached. Data Saved. \n";
			break;
		} else {
			// input error (missing or invalid data)
			cerr << "Invalid input format, Please re-enter (e.g. 100 Alex 50.28):\n";
			cin.clear(); // get rid of error state 
			cin.ignore(1000,'\n');//discards the invalid input 
		}
	}
	
	outClientFile.close(); // closes the file. saved. 
						//or else it'll stay open 
}

