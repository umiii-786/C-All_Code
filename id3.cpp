#include<iostream>
using namespace std;
int main(){
	int row,column,flag=0;
	int matrix[row][column];
	cout<<" enter number of the row :";
	cin>>row;
	cout<<" enter the number of column :";
	cin>>column;
	
	cout<<" enter the matrix element :"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<" enter element at index "<<i<<" "<<j<<" is :";
			cin>>matrix[i][j];
		}
	}
	
	
		for(int j=0;j<row;j++){
		for(int i=0;i<column;i++){
		if( row==column && matrix[i][j]!=1){
				flag=1;
			}
			else if(row!=column && matrix[i][j]!=0){
				flag=1;
			}
			}
		}
	   
	   if(flag==1){
	   	cout<<" matrix is  identity "<<endl;
	   }
	   else{
	   	cout<<" matrix is not identity "<<endl;
	   }
	
	return 0;
}
