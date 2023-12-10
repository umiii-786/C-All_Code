#include<iostream>
using namespace std;

int main(){
		int matrix[3][3]={{3,13,1},
	                    {45,21,5},
					    {31,9,10}};
		int interchange;
		cout<<" your real matrix is "<<endl;
		cout<<endl;	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	    }
			    
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			interchange=matrix[i][j];
			matrix[i][j]=matrix[i+1][j];
			matrix[i+1][j]=interchange;
          	}
		}
	}
	cout<<" your matrix is after inter change of two row "<<endl;
	cout<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	    }
	
	
	
	
}
