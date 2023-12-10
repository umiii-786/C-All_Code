#include<iostream>
using namespace std;
void transpose(int matrix[][2],int row);
int main(){
	int matrix[2][2]={{33,23},
	                 {12,11}};
   transpose(matrix,2);

    return 0;
}
void transpose(int matrix[][2],int row){
	
/*	int swap;
	    for(int i=0;i<row;i++){
		for(int j=0;j<2;j++){
			swap=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=swap;
		}
	}
*/	
	cout<<" your matrix is after transpose is "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matrix[j][i]<<"\t";
		}
		cout<<endl;
	}
	
}
