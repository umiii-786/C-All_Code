#include<iostream>
using namespace std;
void sum_row(int matrix[][2],int row);
int main(){
	int matrix[3][2]={{13,11},
	                  {16,21},
	                  {19,18}};
	sum_row(matrix,3);
	return 0;
}

void sum_row(int matrix[][2],int row){
	int row1=0,row2=0,row3=0,column1=0,column2=0,column3=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<2;j++){
			if(i==0){
				row1+=matrix[i][j];
				column1+=matrix[j][i];
			}
				if(i==1){
				row1+=matrix[i][j];
					column2+=matrix[j][i];
			}
				if(i==2){
				row1+=matrix[i][j];
				column3+=matrix[j][i];
			}
		}
	}
	
	cout<<" the sum of row1 and column1 is "<<row1<<" and "<<column1<<" , row2 and column2 is "<<row2<<" and "<<column2<<" and row3 and column3 "<<row3<<" and "<<column3<<endl;
}
