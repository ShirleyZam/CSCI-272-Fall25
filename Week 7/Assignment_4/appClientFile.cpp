#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    ofstream outClientFile("client.txt", ios::app);

    if(!outClientFile){
        cerr << "File could not be opened.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter account, name, and balance. (space seperated)\n"
    << "Enter end-of-file to end input. \n? ";

    int account;
    string name;
    double balance;

    while(cin >> account >> name >> balance){
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    } 

    return 0;
}
