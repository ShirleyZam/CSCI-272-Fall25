#include <iostream>
#include <fstream>
#include <string>
#include <vector> 


using namespace std;

int main(){
    fstream myFile;
    myFile.open("secretCodes.txt",ios::in); 
   
    if(!myFile.is_open()){
        cerr << "Error: Could not open file! \n";
    } else {
        int code; 
        while(myFile >> code){
            cout << char(code);
        }
    

        myFile.close();
    }


}
