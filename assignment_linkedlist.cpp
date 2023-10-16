/*Linked list operations: Create a linked list of names and birthdays of
CO1,CO2, CO3
students. Write a menu driven C++ program to perform following
operations
1. Insert name and birthday of new student
2. Delete a student entry
3. Display a happy birthday message for whom today (based on
system date) is birthday
4. Display list of students with their birthdays*/

#include<iostream>
#include<ctime>
using namespace std;

class StudentNode{
	string name;
	int day;
	int month;
	StudentNode* next;
}

class StudentList{
	StudentNode* head = nullptr;
	
	public:
		void insert(){
			StudentNode* newStudent = new StudentNode;
			cout<<"Enter your name your DOB and DOM repectively: \n";  
			cin>> newStudent->name>> newStudent->day>> newstudent->month;
			newStudent->next = head;
			head = newStudent;
		}
		void birthdayMssg(){
			
