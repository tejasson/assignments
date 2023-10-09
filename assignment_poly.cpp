#include<iostream>
using namespace std;

struct poly_term{
	int coef;
	int exp;
};

class polynomial{
	private:
		int x=0;
		int maxsize1;	int maxsize2;
		poly_term poly1[100];	poly_term poly2[100];	poly_term sum_poly[100];
		
	public:
		void input(){
			cout<<endl<<"enter no. of terms you wanna insert in 1st polynomial: ";
			cin>>maxsize1;
			
			for(int i=0; i<maxsize1; i++){
				cout<<"enter coefficient and exponent respectively: \n";
				cin>>poly1[i].coef>>poly1[i].exp;
			}
			
			cout<<endl<<"enter no. of terms you wanna insert in 2nd polynomial: ";
			cin>>maxsize2;
			
			for(int i=0; i<maxsize2; i++){
				cout<<"enter coefficient and exponent respectively: \n";
				cin>>poly2[i].coef>>poly2[i].exp;
			}
		}
		
		void add_poly(){
			for(int i=0; i<maxsize1 && maxsize2; i++){
				if(poly1[i].exp==poly2[i].exp){
					sum_poly[x].coef=poly1[i].coef+poly2[i].coef;
					sum_poly[x].exp=poly1[i].exp;
					x++;
				}
				else if(poly1[i].exp>poly2[i].exp){
					sum_poly[x].coef=poly1[i].coef;
					sum_poly[x].exp=poly1[i].exp;
					x++;
				}
				else if(poly1[i].exp<poly2[i].exp){
					sum_poly[x].coef=poly2[i].coef;
					sum_poly[x].exp=poly2[i].exp;
					x++;
				}
			}
		}
		
		void display(){
			for(int i=0; i<=x; i++){
				cout<<sum_poly[i].coef<<"x^"<<sum_poly[i].exp<<" + ";
			}
			cout<<endl;
		}
};				

int main(){
	polynomial obj1;
	obj1.input();
	obj1.display();
	
	return 0;
}
