#include <iostream>
#include <fstream>
#include <string>
#include <vector> 

using namespace std;

int main() {
    fstream myFile;
    fstream myFile2;

    myFile.open("secretCodes.txt", ios::app);
    myFile2.open("UnsecretCodes.txt",ios::app); 

    if (!myFile.is_open()){
        cerr << "Error: Could not open file! \n";
    }

    if (!myFile2.is_open()){
        cerr << "Error: Could not open file! \n";
    }

    vector <char> Code;
    
    cout << "Enter your sentence: ";
    string sentence;
    getline(cin,sentence);
    
    myFile2 << sentence;
    myFile2.close();

    for(char charSentence : sentence){
        Code.push_back(charSentence);
    }

    for(char SecretCode : Code){
        cout << ' ' << int(SecretCode) << ' ';
        myFile << ' ' << int(SecretCode) << ' ';
    }
    myFile.close();

}