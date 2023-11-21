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
    string a, b, c, o, expression, prefix, postfix, resultVar, expTemp;
    stack<string> resultStack;

public:
    void userInput()
    {
        cout << "Enter the expression: ";
        cin >> expression;
        cout<<endl;
    }
    
    void infixOperations()
    {
        stack<string> operatorStack;
        //infix to prefix operation;
        cout<<"infix to prefix: ";
        for (int i = expression.length()-1; i >= 0; i--)
        {
            if (expression[i] != '(' && expression[i] != ')')
            {
                if (expression[i] >= 'a' && expression[i] <= 'z')
                {
                    expTemp = expression[i];
                    resultStack.push(expTemp);
                    // cout<<expression[i]<<"pushed1";
                }
                else if (expression[i] == '*' || expression[i] <= '/' || expression[i] <= '+' || expression[i] <= '-')
                {
                    expTemp = expression[i];
                    operatorStack.push(expTemp);
                    // cout<<expression[i]<<"pushed2";
                }
                
            }
            else if (expression[i] == '(')
            {
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                o = operatorStack.top();
                operatorStack.pop();

                c = o+a+b;
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar<<endl;

        //infix to postfix operation;
        cout<<"infix to postfix: ";
        for (int i = 0; i < expression.length(); i++)
        {
            if (expression[i] != '(' && expression[i] != ')')
            {
                if (expression[i] >= 'a' && expression[i] <= 'z')
                {
                    expTemp = expression[i];
                    resultStack.push(expTemp);
                    // cout<<expression[i]<<"pushed1";
                }
                else if (expression[i] == '*' || expression[i] <= '/' || expression[i] <= '+' || expression[i] <= '-')
                {
                    expTemp = expression[i];
                    operatorStack.push(expTemp);
                    // cout<<expression[i]<<"pushed2";
                }
                
            }
            else if (expression[i] == ')')
            {
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                o = operatorStack.top();
                operatorStack.pop();

                c = b+a+o;
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar<<endl;
    }

    void postfixOperations()
    {
        //postfix to infix operation
        cout<<"Postfix to Infix: ";
        for(int i = 0; i < expression.length(); i++){
            if (expression[i] >= 'a' && expression[i] <= 'z')
            {
                expTemp = expression[i];
                resultStack.push(expTemp);
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
        for(int i = 0; i < expression.length(); i++){
            if (expression[i] >= 'a' && expression[i] <= 'z')
            {
                expTemp = expression[i];
                resultStack.push(expTemp);
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
        for (int i = expression.length()-1; i >= 0; i--)
        {
            if (expression[i] >= 'a' && expression[i] <= 'z')
            {
                expTemp = expression[i];
                resultStack.push(expTemp);
            }
            else
            {
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                c = "("+a+expression[i]+b+")";
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar<<endl;

        //prefix to postfix operation
        cout<<"Prefix to Infix: ";
        for (int i = expression.length()-1; i >= 0; i--)
        {
            if (expression[i] >= 'a' && expression[i] <= 'z')
            {
                expTemp = expression[i];
                resultStack.push(expTemp);
            }
            else
            {
                a = resultStack.top();
                resultStack.pop();
                b = resultStack.top();
                resultStack.pop();
                c = a+b+expression[i];
                resultStack.push(c);
            }
        }
        resultVar = resultStack.top();
        resultStack.pop();
        cout<<resultVar<<endl;
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
    switch (choice)
    {
        case 1:
        obj.infixOperations();
        break;

        case 2:
        obj.postfixOperations();
        break;

        case 3:
        obj.prefixOperations();
        break;
    }

    return 0;
}
