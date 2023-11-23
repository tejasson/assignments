// Simulation of pizza parlor: 
// Pizza parlor accepting maximum M orders.
// Orders are served on a first come first served basis. Order once placed cannot be canceled.
// Write C++ program to simulate the system using simple queue or circular queue

#include<iostream>
using namespace std;

class PizzaParty{
    int pizzaId = 0, front = 0, pizzaQueue[10];

    public:
        void pizzaOrder(){
            if (pizzaId >= 10){
                cout<<"cafe is full😟 come back later"<<endl;
            }
            else{
                cout<<"Your order is placed 😁, your order no. is: "<<pizzaId+1<<endl;
                pizzaQueue[pizzaId] = pizzaId+1;
                pizzaId++;
            }
        }
        void pizzaServe(){
            if (front > pizzaId){
                cout<<"All orders have been served 😁"<<endl;
            }
            else if (pizzaId == 0){
                cout<<"Order book is empty press 1. and order your yummy😋 pizza"<<endl;
            }
            else {
                cout<<endl<<"Order no. "<<front+1<<" is ready...😋"<<endl;
                front++;
            }
        }
        void display(){
            if (pizzaId == 0 || front > pizzaId){
                cout<<"Order book is empty press 1. and order your yummy😋 pizza"<<endl;
            }
            else{
                cout<<"pending orders are: "<<endl;
                for (int i = front; i < pizzaId; i++){
                    cout<<pizzaQueue[i]<<",    ";
                }
            }
        }
};

int main(){
    PizzaParty obj;
    int choice = 0;
    while (choice != 4)
    {
        cout<<endl<<endl<<"1. Order Pizza"<<endl
        <<"2. Serve Pizza"<<endl
        <<"3. Display Orders"<<endl
        <<"4. Exit"<<endl;
        cout<<"your choice: "; cin>>choice;

        switch (choice)
        {
        case 1:
            obj.pizzaOrder();
            break;
        
        case 2:
            obj.pizzaServe();
            break;
        
        case 3:
            obj.display();
            break;
        
        default:
            break;
        }
    }
    cout<<endl<<"visit again 😁"<<endl;
}
