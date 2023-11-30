// Sorting: Write a C++ menu driven program to store the percentage of 
// marks obtained by the students in an array. Write function for sorting array 
// of floating point numbers in ascending order using 
// 1. Selection Sort *
// 2. Bubble sort *
// 3. Insertion sort *
// 4. Shell Sort 
// 5. Quick sort *
// 6. Radix sort 
// 7. Display top five scores 
// Implement 4 methods of sorting. Provide choice to user to take input from 
// user or using random numbers. 
// Use Standard Template Library (STL) sort function for above data.

#include<iostream>
using namespace std;

class Sorting
{
    int temp; int min; int minIndex;
    int arr[10] = {10,2,1,5,4};

    public:
        void bubbleSort()
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = i+1; j < 5; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
                cout<<arr[I]<<" ";
            }
            cout<<endl;
        }

        void insertSort()
        {
            for ( int i = 1; i < 5; i++)
            {
                for (int j = i-1; j >= 0; j--)
                {
                    if (arr[i] < arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        i--;
                    }
                }
            }
            for (int i = 0; i < 5; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void selectionSort()
        {
            for (int i = 0; i < 5; i++)
            {
                min = arr[i];
                for (int j = i; j < 5; j++)
                {
                    if (min > arr[j])
                    {
                        min = arr[j];
                        minIndex = j;
                    }
                }
                if (min != arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[minIndex];
                    arr[minIndex] = temp;
                }
            }
            for (int i = 0; i < 5; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Sorting obj;
    
    obj.bubbleSort();
    obj.insertSort();
    obj.selectionSort();

    return 0;
}
