#include<iostream> //gives access to input/output library 
#include<vector> //gives access to vector library
#include<string>//gives acess to string library
using namespace std;

int main(){
    //First I initialized the vector by stating
    //that it's a string and it's name is menu
    vector<string> menu;

    //I used pushed_back to add the foods to the menu
    menu.push_back("Lasagna");
    menu.push_back("Chicken Empanadas");
    menu.push_back("Nachos");
    menu.push_back("Pupusas");
    menu.push_back("Pasta");

    //Here I am replacing the food in position 2 (Nachos)
    //with Pizza
    menu[2] = "Pizza";
    //I am using the erase command by saying 
    //go to the beginning of the vector and go to position 3
    //which is really the fourth dish since the vector positions start with 0 
    menu.erase(menu.begin() + 3);

    //Here I am creating a range-based loop
    //by creating a new string called food and it will
    //make a copy of the vector named menu in order to print it out
    for (string food:menu){
        cout << food << endl;
    }


}

/*Short Reflection: 
What is Big-O Notation?
Big-O Notation is how fast the code is performing. It measures the constant time complexity, basically how the code will perform if 
more things are implemented.  For example, O(1) is the fastest, while  
O(n) takes more time to go through the instructions set by the programmer.

Why is Big-O important for programmers?
Big-O is important to programmers because if the vector/array were to increase or decrease (numbers.erase(number.begin() + x) it would slow the 
program down. So it is important to take into account how these changes could affect the speed of the program.
An example of this in real life could be adding and deleting phone numbers from your contacts, it take O(n) to add a new number or delete it. But it may take O(1) to search 
a number through the first letter of the contact name. 

Why was a vector a better choice than array for this problem?
A vector was a better choice than an array for this problem because I was able to manipulate the arrays size. 
I was able to add a new element into the vector and also delete an element. An array is static,
the size you give it in the beginning is the size it'll stay throughout the code.
*/