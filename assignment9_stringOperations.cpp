// String operations: A palindrome is a string of characters that's identical
// CO1,CO2, CO4
// when read in forward and backward direction. Typically, punctuation,
// capitalization, and spaces are ignored. For example, “1.Poor Dan is in a
// droop!!” is a palindrome, as can be seen by examining the characters
// “poordanisinadroop” and observing that they are identical when read
// forward and backward directions. One way to check for a palindrome is to
// reverse the characters in the string and compare them with the original-in a
// palindrome, the sequence will be identical.
// Write C++ program with functions using Standard Template Library (STL)
// stack-
// 1. To print original string followed by reversed string using stack
// 2. To check whether given string is palindrome or not

#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;

class StringOps{
    string strOrg;//= "1.Poor Dan is in a droop!!";
    string strRev; string strNoSpace;
    stack<char> stackChar;
    //template   tempName

    public:
        void userInput(){
            cout<<"enter the string"; getline(cin,strOrg);
        }
        void reverseStr(){
            for(char c:strOrg){
                if(isalpha(c)){
                    strNoSpace += tolower(c);
                    stackChar.push(tolower(c));
                }
            }
        }
        void display(){
            cout<<"Original String: "<<strOrg<<endl;
            cout<<"Reversed String: ";
            while(!stackChar.empty()){
                cout<<stackChar.top();
                strRev += stackChar.top();
                stackChar.pop();
            }
            cout<<endl;
        }
        void ispalindrome(){
            if(strRev==strNoSpace){
                cout<<"String is palindrome"<<endl;
            }
            else{
                cout<<"String isn't palindrome"<<endl;
            }
        }
};
int main(){
    StringOps obj;
    obj.userInput();
    obj.reverseStr();
    obj.display();
    obj.ispalindrome();
    return 0;
}         
