#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cstdlib>


using namespace std; 

void outPutLine(int account, string &name, double balance){\
    cout << left << setw(10) << account 
         << setw(10) << name
         <<setw(10)<< fixed << setprecision(2) << balance << endl;
}
int main(){
    ifstream inClientFile("client.txt", ios::in);

    if(!inClientFile){
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }


    cout << left << setw(10) << "Account" << setw(13) << "Name" 
    << "Balance\n" << fixed << showpoint;

    int account; 
    string name;
    double balance;

    while(inClientFile >> account >> name >> balance){
        cout << left << setw(10) << account << setw(13) << name
        << setw(7) << setprecision(2) << right << balance << endl;
    }


    

    

    
}