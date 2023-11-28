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
    int key;
    int studRollLinear[100];
    int studRollBinary[100];

    public:
        void linearStudInput()
        {
            for (int i = 0; i < 5; i++)
            {
                cout<<"\nEnter the present roll no: "<<i<<" :";
                cin>>studRollLinear[i];
            }
            cout<<"student registered successfully";
        }

        void linearSearch()
        {
            cout<<"Enter the roll no of the student you want to check: ";
            cin>>key;

            for (int i = 0; i < 5; i++)
            {
                if (key == studRollLinear[i])
                {
                    cout<<i<<" has attended the Leacture";
                }
                else
                {
                    cout<<"Roll no"<<studRollLinear[i]<<" was absent";
                }
            }
        }

        void binaryStudInput()
        {
            for (int i = 0; i < 9; i++)
            {
                cout<<"\nEnter the student roll no: ";
                cin>>studRollBinary[i];
            }
            cout<<"Student registered successfully.";
        }

        void binarySearch()
        {
            int mid = sizeof(studRollBinary)/2;
            int high; int low;

            cout<<"Enter the roll no of the student you want to check: ";
            cin>>key;

            while (true)
            {
                if (studRollBinary[mid] == key)
                {
                    cout<<"Student no "<<studRollBinary[mid]<<" is present at "<<mid;
                    break;
                }
                else if (studRollBinary[mid] > key)
                {
                    mid = mid - 1;
                }
                else if (studRollBinary[mid] < key)
                {
                    mid = mid + 1;
                }
                else
                {
                    continue;
                }
            }
        }    
};

int main()
{
    Searching obj;
    obj.linearStudInput();
    obj.linearSearch();
    obj.binaryStudInput();
    obj.binarySearch();

    return 0;
}