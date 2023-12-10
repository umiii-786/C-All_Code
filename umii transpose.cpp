#include<iostream>
using namespace std;
int main(){
	int matrix[3][3]={{1,2,3},
	                  {4,5,6},
	                  {7,8,9}};
	   cout<<"\t\tyour matrix elements are before transpose "<<endl;
	   	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	               
    int temp;
//    int start=0;
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			temp=matrix[i][j];
		matrix[i][j]=matrix[j][i];
		matrix[j][i]=temp;	
		}
	}
	temp=matrix[2][1];
	matrix[2][1]=matrix[1][2];
	matrix[1][2]=temp;
	
}
	cout<<"\t\tyour matrix elements are after transpose "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
