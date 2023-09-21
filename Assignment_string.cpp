/*String Operations: Write a menu driven C++ program with a class for String. Write functions
1. To determine the frequency of occurrence of a particular character
in the string.
2. Extract a new string from original string by accepting starting
position and length
3. To accept any character and return the string with by removing all
occurrences of a character accepted
4. To make an in-place replacement of a substring w of a string by the
string x. Note that w may not be of same size that of x
5. To check whether given string is palindrome or not*/

#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

class String{
	private:
		string str; string sub_str;
		char character;
		char removed_char;
		int count=0; int pos; int len_upto;
        bool b;
	
	public:
		void input(){
			cout<<"enter string: ";
			getline(cin,str);
		}

// 1. To determine the frequency of occurrence of a particular character
// in the string.		
		void char_freq(){
			cout<<"character you wanna check kr: ";
			cin>>character;
			for(int i=0; i<str.size(); i++){
				if(str[i]==character){
					count++;
				}
			}
			cout<<character<<" occurs "<<count<<" times.\n";
		}

// 2. Extract a new string from original string by accepting starting
// position and length
		void extract_str(){
			int c;
			cout<<"Enter the starting postion: ";
			cin>>pos;
			cout<<"lenght of sub string: ";
			cin>>len_upto;
			
			for(c=0; c<len_upto; c++){
				sub_str[c]=str[pos];
				cout<<sub_str[c];
				pos++;
			}
			cout<<endl;
		}

// 3. To accept any character and return the string with by removing all
// occurrences of a character accepted
		void char_remove(){
			cout<<"enter the character you want to remove: ";
			cin>>removed_char;
			for(int i=0; i<str.size(); i++){
				if(str[i]!=removed_char){
					cout<<str[i];
				}
			}
			cout<<endl;
		}

// 4. To make an in-place replacement of a substring w of a string by the
// string x. Note that w may not be of same size that of x
        void str_replace(){
            string w, x;
            cout<<"enter the sub string you want to replace: "<<endl;
            cin>>w;
            cout<<"\nenter the replacement string: "<<endl;
            cin>>x;

            int q=0; int pos; bool boolean;
			for(int i=0; i<sizeof(str); i++){
				if(w[q]==str[i]){
					pos = i;
				}
			}
			for(int k=0; k<sizeof(x); k++){
				str[pos]=x[k];
				pos++;
			}
			for(int i=0; i<sizeof(str); i++){
				cout<<str[i];
			}
        }      

// 5. To check whether given string is palindrome or not
		void palindrome(){
			int len=str.size();
			for(int i=0; i<=len; i++){
				if(str[i]==str[len-1]){
					b = true;
				}
				else{
					cout<<"string is not palindrome"<<endl;
				}
				len--;
			}
            if (b){
                cout<<"string is palindrome"<<endl;
			}
		}
};

int main(){
	String obj;
	obj.input();
	// obj.char_freq();
	// obj.extract_str();
	// obj.char_remove();
	obj.str_replace();
	//obj.palindrome();
	return 0;
}