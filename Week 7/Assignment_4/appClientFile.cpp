#include <iostream>
#include <fstream>
#include <limits>
#include <cstdlib>

using namespace std;

int main(){
    ofstream outClientFile("client.txt", ios::app);

    if(!outClientFile){
        cerr << "File could not be opened.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter account, name, and balance. (space seperated)\n"
    << "Enter Ctrl+Z (Windows) or Ctrl+D(Mac) to end input. \n? ";

    int account;
    string name;
    double balance;

    while(true){
        if(cin >> account >> name >> balance){
            outClientFile << account << ' ' << name << ' ' << balance << endl;
            cout << "? ";
        }else if(cin.eof()){
            break;
        }else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input \n"; 
        }
        
        
        
        
    } 
    outClientFile.close();
    
}
