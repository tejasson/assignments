/*Sparse Matrix: Write a menu driven C++ program with class for Sparse
Matrix. Write functions to perform Sparse Matrix operations as listed
below
1. Read sparse matrix
2. Display sparse matrix
3. Add two sparse matrices
4. Find transpose using Simple transpose algorithm
5. Find transpose using Fast transpose algorithm
Compare complexity of simple and fast transpose using counter.*/

#include<iostream>
using namespace std;

class sparse{
	private:
		int no_row; int no_col; int element;
		int x1=1; int x2=1;
        int non_zero1=0; int non_zero2=0;
		int sparse_mat1[20][3];
        int sparse_mat2[20][3];
		
	public:
		void read(){
            cout<<"\nenter the first matrix: \n";
			cout<<"number of rows and colunm: \n";  //taking input for first matrix
			cin>>no_row>>no_col;
			
			for(int i=0; i<no_row; i++){
				for(int j=0; j<no_col; j++){
					cout<<"enter element "<<i<<j<<":  ";
					cin>>element;
					
					if(element!=0){
						sparse_mat1[x1][0]=i;
						sparse_mat1[x1][1]=j;
						sparse_mat1[x1][2]=element;
						non_zero1++;
						x1++;
					}
				}
			}
			sparse_mat1[0][0]=no_row; sparse_mat1[0][1]=no_col; 
            sparse_mat1[0][2] = non_zero1;
		}
		
		void display(){                             //Sparse matrix output
            cout<<endl;
			for(int i=0; i<non_zero1+1; i++){
				for(int j=0; j<3; j++){
					cout<<sparse_mat1[i][j]<<"     ";
				}
				cout<<endl;
			}
		}
		
		void add_matrix(){
            cout<<"\nenter the second matrix: \n";
			cout<<"number of rows and colunm: \n";  //taking input for sec. matrix
			cin>>no_row>>no_col;
			
			for(int i=0; i<no_row; i++){
				for(int j=0; j<no_col; j++){
					cout<<"enter element "<<i<<j<<":  ";
					cin>>element;
					
					if(element!=0){
						sparse_mat1[x1][0]=i;
						sparse_mat1[x1][1]=j;
						sparse_mat1[x1][2]=element;
						non_zero1++;
						x1++;
					}
				}
			}
			sparse_mat1[0][0]=no_row; sparse_mat1[0][1]=no_col; 
            sparse_mat1[0][2] = non_zero1;

                        
        }
};
		
int main(){
	sparse obj;
	obj.read();
	obj.display();
    
	
	return 0;
}
