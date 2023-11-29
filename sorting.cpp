#include<iostream>
using namespace std;

class Sorting
{
    int temp;
    int arr[50] = {10,2,1,5,4};

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
                cout<<arr[i]<<",";
            }
            cout<<endl;
        }

        void insertSort()
        {
            for ( int i = 0; i < 5; i++)
            {
                for (int j = i; j >= 0; j--)
                {
                    if (arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
                cout<<arr[i]<<",";
            }
        }
};

int main()
{
    Sorting Obj;
    Obj.bubbleSort();
    Obj.insertSort();

    return 0;
}