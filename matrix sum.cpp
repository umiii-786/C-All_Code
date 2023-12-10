#include<iostream>
using namespace std;
int main(){
	int row=2,column=2;
	int matrix[row][column]={{23,54},
	                         {12,13}};
	int sum_row1=0;
	int sum_row2=0;
	int sum_column1=0;
	int sum_column2=0; 
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(i==0){
			sum_row1+=matrix[i][j];
			sum_column1+=matrix[j][i];
		}
				if(i==1){
			sum_row2+=matrix[i][j];
			sum_column2+=matrix[j][i];
		}
	}
}
	cout<<" the sum of row1 is "<<sum_row1<<" and column1 is "<<sum_column1<<endl;
	cout<<" the sum of row2 is "<<sum_row2<<" and column2 is "<<sum_column2<<endl;
	
	return 0;
}
