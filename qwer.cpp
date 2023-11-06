// Expression conversion: Write a menu driven C++ program for expression
// conversion and evaluation
// 1. infix to prefix
// 2. infix to postfix

#include<iostream>
#include<stack>
using namespace std;

class Conversion{
    int a, b;
    string infix;
    stack<char> operands;
    public:
        void userInput(){
            cout<<"Enter the infix: ";
            cin>>infix;
        }
        void infixPrefix(){
            for (int i=0; i<infix.length(); i++){
                if (isdigit(infix[i])){
                    operands.push(infix[i]);
                }
                else {
                    a=operands.top();
                    operands.pop();
                    b=operands.top();
                    operands.pop();
                }
            }
        }
        void infixPostfix(){

        }
};
int main(){
    int choice;
    Conversion obj;
    obj.userInput();
    cout<<"1. infix to prefix"<<endl;
    cout<<"2. infix to postfix"<<endl;
    cin>>choice;
    if (choice==1){
        obj.infixPrefix();
    }
    else if (choice==2){
        obj.infixPostfix();
    }

    return 0;
}