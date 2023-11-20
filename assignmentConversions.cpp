// Expression conversion: Write a menu driven C++ program for expression
// conversion and evaluation
// 1. infix to prefix
// 2. infix to postfix

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

class Conversion
{
    string a, b, c, expression, prefix, postfix, resultVar, expVar;
    stack<string> resultStack;

public:
    void userInput()
    {
        cout << "Enter the expression: ";
        cin >> expression;
        cout<<endl;
    }
    // void infixToPrefix()
    // {
    //     for (int i = 0; i < expression.length(); i++)
    //     {
    //         if (isdigit(expression[i]))
    //         {
    //             resultStack.push(expression[i]);
    //         }
    //         else
    //         {
    //             a = resultStack.top();
    //             resultStack.pop();
    //             b = resultStack.top();
    //             resultStack.pop();
    //         }
    //     }
    // }
    // void infixToPostfix()
    // {
    //     for (int i = 0; i < expression.length(); i++)
    //     {
    //         if (expression[i] >= 'A' && expression[i] <= 'Z')
    //         {
    //             postfix += expression[i];
    //         }
    //         else if (expression[i] != '(' && expression[i] != ')')
    //         {
    //             resultStack.push(expression[i]);
    //         }

    //         if (expression[i] == ')')
    //         {
    //             postfix += resultStack.top();
    //             resultStack.pop();
    //         }
    //     }
    //     cout << endl
    //          << "output: ";
    //     for (int i = 0; i < postfix.length(); i++)
    //     {
    //         cout << postfix[i];
    //     }
    // }
    void postfixOperations()
    {
        //postfix to infix operation
        cout<<"Postfix to Infix: ";
        for(int i=0; i<expression.length(); i++){
            if (expression[i]>='a'&&expression[i]<='z')
            {
                expVar = expression[i];
                resultStack.push(expVar);
            }
            else
            {   
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                c = "("+b+expression[i]+a+")";
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar;

        //postfix to prefix operation
        cout<<endl<<"postfix to Prefix: ";
        for(int i=0; i<expression.length(); i++){
            if (expression[i]>='a'&&expression[i]<='z')
            {
                expVar = expression[i];
                resultStack.push(expVar);
            }
            else
            {   
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                c = expression[i]+b+a;
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar<<endl;
    }
    void prefixOperations()
    {
        //prefix to infix operation
        cout<<"Prefix to Infix: ";
        
    }
};
int main()
{
    int choice;
    Conversion obj;
    obj.userInput();
    cout << "1. infix operations" << endl
         << "2. postfix operations" << endl
         << "3. prefix operations" <<endl
         << "your choice: ";
    cin >> choice; cout<<endl;
    if (choice == 1)
    {
        //obj.infixToPrefix();
    }
    else if (choice == 2)
    {
        obj.postfixOperations();
    }

    return 0;
}
