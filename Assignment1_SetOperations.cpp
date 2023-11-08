 /* 
Set operations: Write a menu driven C++ program to store sets for student's names
participating in different events in Equinox such as Coding contest, 
Project competition, Paper Presentation, MasterMind etc. 
1. Find out participants who have participated in Coding and Project both 
2. Find out participants who have participated in Coding or Project competition 
or Mastermind 
3. Find out participants who have participated in Coding but not in Master mind 
4. Find out participants who have participated in all events
*/

#include<iostream>
using namespace std;

class Events{
	private:
		int a, flag;  int u=0; int v=0; int x=0; int y=0;
		string stud_name[6], coding[6], project[6], presentation[6], mastermind[6];
	
	public:
		void participantsDetail(){
			for(int i=0; i<6 ; i++){
				cout<<endl<<"enter name: ";
				cin>>stud_name[i]; 
				for(int j=0; j<4; j++){
					cout<<endl<<"Events: 1.coding 2.project 3.presentation 4.mastermind 5.exit: ";
					cin>>a;
					if(a==1){
						coding[u]=stud_name[i];
						u++;
					}
					else if(a==2){
						project[v]=stud_name[i];
						v++;
					}
					else if(a==3){
						presentation[x]=stud_name[i];
						x++;
					}
					else if(a==4){
						mastermind[y]=stud_name[i];
						y++;
					}
					else{
						break;
					}
				}
			}
		}
	// 1. Find out participants who have participated in Coding and Project both	
		void cond1(){
			cout<<"\nThese are the common participants in project and coding:\n";
			for(int i=0; i<u; i++){
				for(int j=0; j<v; j++){
					if(coding[i]==project[j]){
						cout<<coding[i]<<"  ";
					}
					else{
						continue;
					}
				}
			}
		}

	/* 2. Find out participants who have participated in Coding or Project competition 
	or Mastermind*/ 
		void cond2(){
			for(int i=0; i<u; i++){
				flag=0;
				for(int j=0; j<v; j++){
					flag=0;
					for(int k=0; k<y; k++){
						if(coding[i]==project[j]||project[j]==mastermind[k]||mastermind[k]==coding[i]){
							flag=1;
						}
						if(flag!=1){
							cout<<coding[i]<<"  "; cout<<project[i]<<"  "; cout<<mastermind[i]<<"  ";
						}
					} 
				}
			}
		}

	// 3. Find out participants who have participated in Coding but not in Master mind 
		void cond3(){
			cout<<"\nThese are the participants in coding but are not in Mastermind:\n";
			for(int i=0; i<u; i++){
				flag=0;
				for(int j=0; j<y; j++){
					if(coding[i]==mastermind[j]){
						flag=1;
						break;
					}
				}
				if(flag!=1){
					cout<<coding[i]<<"  ";
				}
			}
		}

	// 4. Find out participants who have participated in all events
		void cond4()
		{	
			cout<<"\n These are the students participated in all events: \n";
			for(int i=0; i<u; i++)
			{
				for(int j=0; j<v; j++)
				{
				    for(int p=0; p<x; p++)
				    {
				        for(int q=0; q<y; q++)
				        {      
					        if(coding[i]==project[j] && project[j]==presentation[p] && presentation[p]==mastermind[q])
					        {
						        cout<<coding[i]<<"  "; 
						        break;
					        }
				        }	 
			        }
	            }
	        }
		}
};

int main(){
	Events
 obj;
	obj.participantsDetail();

	int ch;
	cout<<"\nenter your choice: ";
	cin>>ch;
	switch (ch)
	{
	case 1:
		obj.cond1();
		break;
	case 2:
		obj.cond2();
		break;
	case 3:
		obj.cond3();
		break;
	case 4:
		obj.cond4();
		break;	
	default:
		break;
	}

	return 0;
}
