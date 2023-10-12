#include<iostream>
using namespace std;

class node{
	int data;
	node *address;
	
	public:
	void input_data(){
		cout<<"enter the data: ";
		cin>>data;
		
		this->data = data;
		this->address = NULL;
	}
	
	void display(){
		cout<<data<<address<<endl;
	}
};

int main(){
	node obj;
	obj.input_data();
	obj.display();
}
