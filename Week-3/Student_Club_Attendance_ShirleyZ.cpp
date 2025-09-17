#include<iostream> // gives acess to standard input/output library
#include<vector> //gives access to vector library
using namespace std;  

double getAverage(const vector<int>&StudentID){
    //Sum is initialized to zero to ensure no calculating errors occur (starting point)
    double sum = 0;
   //Range Based loop: ID makes a copy of the elements in Student ID 
    for (int ID : StudentID){ 
        //Here the sum says: add the first element to zero then keep adding until the last element
        sum += ID; 
    }
    //double Average to have a more accurate number
    double Average;
    //Average is being divided by the size of the StudentID (the elements in the vector)
    Average = sum/StudentID.size();
    //only the Average will output when called
    return Average;

}


int getHighest(const vector<int>& StudentID) {
    //Here I am initializing the largest to the first element in the vector (the element in position 0)
    int largest = StudentID[0];
    //Range Based Loop: here it is making a copy of the elements in the vector StudentID
    for (int ID : StudentID) {
        //if statement in the for loop will go through each element
        // compare them and assign the bigger number to the variable largest
        //it'll keep going until it finds the largest element (no other element is larger)
        if (ID > largest) {
            largest = ID;
        }
    }
    //outputs the largest number only
    return largest;
}

int main(){
    //creating the vector in the main function 
    vector <int> StudentID;

    //reserving memory for ten elements in the vector this allocates memory and speeds up the process
    StudentID.reserve(10);
    //Here I am asking the person to input the Student ID's
    cout<< "Enter the Student ID's \n";
    
    int ID;
    //For Loop 
    //The list starts at 0 and stops when you enter the 10th element
    for (int i = 0; i<10; i++){
        //user is able to input their ID's
        cin >> ID;
        //Push back is used to add it to the end of the vector 
        StudentID.push_back(ID);
    }

    
//calling the functions and outputting them for the user to see 
    cout << getAverage(StudentID)<<endl;
    cout << getHighest(StudentID)<<endl;
}

/*Short Reflection: 
What is Big-O Notation?
Big-O Notation is how fast the code is performing. It measures the constant time complexity, basically how the code will perform if 
more things are implemented.  For example, O(1) is the fastest, while O(n) takes more time to go through the instructions set by the programmer 
(for loops is O(n) because it goes through a list).

Why is Big-O important for programmers?
Big-O is important to programmers because if the vector/array were to increase or decrease (numbers.erase(number.begin() + x) it would slow the 
program down. So it is important to take into account how these changes could affect the speed of the program.
An example of this in real life is cleaning your desk, depending on how messy it is it will affect the amount of time 
you clean it. 


Why was a vector a better choice than array for this problem?
A vector was a better choice than an array for this problem because if I were to change the size of the vector I could easily 
just change it in the main function without affecting the The Average function and the Largest Number function. Or if I want to
add more elements with push_back, I could because vectors are dynamic. They can shrink and increase their size. 

*/