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
	public:
		string name;
		int day;
		int month;
		StudentNode* next;
};

class StudentList{
	public:
        StudentNode* head=NULL;
		void insertion(){
            int choice;
            cout<<"1.insertion at tail"<<endl;
            cout<<"2.insertion at head"<<endl;
            cin>>choice;

            if(choice==1){
                StudentNode* newStudent = new StudentNode;
                cout<<"Enter your name: "; cin>>newStudent->name;
                cout<<"enter your Dob: "; cin>>newStudent->day;
                newStudent->next=NULL;
                if(head==NULL){
                    head=newStudent;
                    return;
                }
                while(head!=NULL){
                    head = head->next;
                }
                head->next = newStudent;
            }
            // else if(choice==2){
            //     StudentNode* newStudent = new StudentNode();
            //     cout<<"Enter your name your DOB and DOM repectively: \n";  
			//     cin>>newStudent->name >>newStudent->day >>newStudent->month;
            //     newStudent->next=NULL;
            // }
        }

        void display(){
            StudentNode* temp = head;
            while(temp!=NULL){
                cout<<temp->name;
                temp = temp->next;
            }
        }
};

int main(){
    StudentList obj;
    obj.insertion();
    obj.insertion();
    obj.display();

    return 0;
}
