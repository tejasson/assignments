// 1.push
// 2.pop
// 3.gettop
// 4.isempty

#include<iostream>
using namespace std;

class StackOperation{
    int element;
    int stack[100], topIndex = -1;
    public:
        void push(){
            cout<<"enter element: "; cin>>element;
            if (topIndex>=100){
                cout<<"stack overflow"<<endl;
            }
            else{
                topIndex++;
                stack[topIndex]=element;
            }
        }
        void pop(){
            if (topIndex==-1){
                cout<<"stack underflow"<<endl;
            }
            else{
                cout<<stack[topIndex]<<" is deleted"<<endl;
                topIndex--;
            }
        }
        void getTop(){
            if (topIndex==-1){
                cout<<"stack underflow"<<endl;
            }
            else{
                cout<<stack[topIndex]<<endl;
            }
        }
        void isEmpty(){
            if (topIndex==-1){
                cout<<"stack underflow"<<endl;
            }
            else{
                cout<<"stack isn't empty is has "<<topIndex+1<<" elements in it\n";
            }
        } 
};

int main(){
    StackOperation obj;
    int ch=0;
    cout<<
    "1.push\n"
    "2.pop\n"
    "3.get top\n"
    "4.is stack empty\n"
    "5.exit stack"<<endl;

    while (ch<5){
        cout<<"enter your choice: ";
        cin>>ch;
        switch (ch){
        case 1:
            obj.push();
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.getTop();
            break;
        case 4:
            obj.isEmpty();
            break;

        default:
            break;
        }
    }
}