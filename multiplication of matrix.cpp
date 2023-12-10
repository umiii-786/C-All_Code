#include<iostream>
using namespace std;
int main(){
	int row1=2,column1=3;
	int matrix1[row1][column1];
	int row2=3,column2=3;
	int matrix2[row2][column2];
	int multiplication[3][3];
	int sum=0;
	cout<<" enter the matrix 1 elements "<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<column1;j++){
			cin>>matrix1[i][j];
		}
	}
	cout<<" enter the matrix 2 elements "<<endl;
		for(int i=0;i<row2;i++){
		for(int j=0;j<column2;j++){
			cin>>matrix2[i][j];
		}
	}
	if(column1==row2){
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum=0;
			for(int k=0;k<3;k++){
				sum+=matrix1[i][k]*matrix2[k][j];				
			}
			multiplication[i][j]=sum;
		}
	}
}
	cout<<" your resultant matrix is "<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<multiplication[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
