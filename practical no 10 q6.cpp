#include<iostream>
using namespace std;
int main(){
	
	int matrix[3][3]={{1,2,3},
	                  {4,5,6},
	                  {7,8,9}};
	  int swap;  
	  cout<<" your matrix is "<<endl;
	  
	    	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;            
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			swap=matrix[i][j];
			matrix[i][j]=matrix[i+1][j];
			matrix[i+1][j]=swap;
		}
	}
	}
	cout<<" your matrix is adfter swapng two row"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			swap=matrix[j][i];
			matrix[j][i]=matrix[j][i+1];
			matrix[j][i+1]=swap;
		}
	}
	}
	
	cout<<"your matrix is after swaping column "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
