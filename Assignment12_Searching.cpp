// Searching: Write a C++ program to store roll numbers of students in an
// array who attended online lectures in random order. Write function for
// searching, whether a particular student attended lecture or not using
// 1. Linear search
// 2. Binary search
// 3. Jump search
// compare the searching methods based on complexities of an algorithm
// Provide choice to user to take input from user or using random numbers
// Use Visual C++ compiler to compile and execute the program.

#include<iostream>
using namespace std;

class Searching
{
    int n;
    int key;
    int studRoll[];

    public:
        void linearStudInput()
        {
            cout<<"enter the no of student you want to register: "; cin>>n;
            for (int i = 0; i < n; i++)
            {
                cout<<"\nEnter the present roll no: "<<i<<" :";
                cin>>studRoll[i];
            }
            cout<<"student registered successfully";
        }

        void linearSearch()
        {
            cout<<"Enter the roll no of the student you want to check: "<<endl;
            cin>>key;

            for (int i = 0; i < 5; i++)
            {
                if (key == studRoll[i])
                {
                    cout<<"Student has attended the Leacture, and is at "<<i<<"th index"<<endl;
                    return;
                }
            }
            cout<<"Roll no"<<key<<" was absent"<<endl;
        }

        void binaryStudInput()
        {
            cout<<endl<<"*************************************************"<<endl;
            cout<<"enter no of student you want to register : "; cin>> n;
            for (int i = 0; i < n; i++)
            {
                cout<<"\nEnter the student roll no: ";
                cin>>studRoll[i];
            }
            cout<<"Student registered successfully."<<endl;

            cout<< sizeof(studRoll);
        }

        void binarySearch()
        {
            int high = n-1; int low = 0;

            cout<<"Enter the roll no of the student you want to check: ";
            cin>>key;

            while (high >= low)
            {
                int mid = (high + low)/2;
                if (studRoll[mid] == key)
                {
                    cout<<"Student no "<<studRoll[mid]<<" is present at "<<mid<<endl;
                    return;
                }
                else if (studRoll[mid] > key)
                {
                    high = mid -1;
                }
                else if (studRoll[mid] < key)
                {
                    low = mid + 1;
                }
            }
            cout<<"Student "<<key<<" was absent"<<endl;
        }    
};

int main()
{
    Searching obj;
    // obj.linearStudInput();
    // obj.linearSearch();
    obj.binaryStudInput();
    obj.binarySearch();

    return 0;
}
