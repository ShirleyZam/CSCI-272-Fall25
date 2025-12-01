#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>


#include "Person.h"

class Student : public Person {
	private: 
		int studentID; 
	public:
		//base constructor called
		
	Student(string n, int id) : Person(n), studentID(id){
		cout << " Student constructor\n";
	
	}
	
	~Student(){
		cout << " Student Destructor\n";
	}
	
	void showInfo() const{
		showName(); 
		cout << "ID: " << studentID << endl; 
	}
};

#endif


