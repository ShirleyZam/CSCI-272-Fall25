#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> 

using namespace std; 

void outPutLine(int account, string &name, double balance){
    cout << left << setw(10) << account
         << setw(10) << name 
         << setw(10) << fixed << setprecision(2) << balance << endl;
}


int main(){
    ifstream inClientFile("client.txt", ios::in); 

    if(!inClientFile){
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }
    int account; 
    string name; 
    double balance; 
    int choice; 

    while(true){
        cout << "\n=== Banking System ===\n";
        cout << "1 : Zero Balance" << endl;
        cout << "2 : Credit Balance" << endl;
        cout << "3 : Debit Balance" << endl;
        cout << "4 : Exit" << endl;
        cin >> choice; 

        switch(choice){
            case 1: 
            inClientFile.clear();
            inClientFile.seekg(0);

            cout << "\n === Zero Balance ===\n";
            
            while (inClientFile >> account >> name >> balance){
                if (balance == 0){
                    outPutLine(account, name, balance); 
                }
            }
             break;

            case 2:
            inClientFile.clear();
            inClientFile.seekg(0);

            cout << "\n === Credit Balance ===\n";
            
            while(inClientFile >> account >> name >> balance){
                if (balance < 0){
                    outPutLine(account, name, balance);
                }
            }

            break;

            case 3: 
            inClientFile.clear();
            inClientFile.seekg(0);

            cout << "\n === Debit Balance ===\n";

            while(inClientFile >> account >> name >> balance){
                if (balance > 0){
                    outPutLine(account, name, balance);
                }
            }

            break;

            case 4:
            cout << "BYE!";
            return 0;

            default: 
            cout << "Invalid choice" << endl;
            break;
        }
    }
}
