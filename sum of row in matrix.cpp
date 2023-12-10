#include<iostream>
using namespace std;

void sum_row(int matr[][3],int size);
int main(){
	int matrix[3][3]={{3,13,1},
	                  {45,21,5},
					  {31,9,10}};
				               
	sum_row(matrix,3);
	return 0;
}

void sum_row(int matr[][3],int size){
	int row1=0,row2=0,row3=0;
	for(int j=0;j<size;j++){
	for(int i=0;i<size;i++){
		if(j==0){
		row1+=matr[j][i];	
		}
		if(j==1){
		row2+=matr[j][i];	
		}
		if(j==2){
		row2+=matr[j][i];	
		}
	}
}
cout<<" the sum of row1 is "<<row1<<" row2 is "<<row2<<" and row3 is "<<row3<<endl;
}
