#include<iostream>
using namespace std;

class Node{
	int data;
	Node *address;
	
	input_data(){
		cout<<"enter the data: ";
		cin>>data;
		
		this->data = data;
		this->address = NULL;
	}
};

class Link{
	



int main(){
	node obj;
	obj.input_data();
	obj.display();
}
