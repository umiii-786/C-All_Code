#include<iostream>
using namespace std;

int main(){
	int matrix[3][3]={{31,12,13},
	                  {9,11,10},
					  {8,7,15}};
					  
	cout<<" the real matrix is "<<endl;
	 for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
	      cout<<matrix[i][j]<<"\t";
		}
	    cout<<endl;
	    }
	int swap;				
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			swap=matrix[i][j];
			matrix[i][j]=matrix[i+1][j];
			matrix[i+1][j]=swap;
	}
	}
	}
	cout<<" your matrix after changing 2 row "<<endl;
	 for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
	      cout<<matrix[i][j]<<"\t";
		}
	    cout<<endl;
	    }
	    
	    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0){
			swap=matrix[j][i];
			matrix[j][i]=matrix[j+1][i];
			matrix[j+1][i]=swap;
	}
	}
	}
		cout<<" your matrix after changing 2 column "<<endl;
	 for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
	      cout<<matrix[i][j]<<"\t";
		}
	    cout<<endl;
	    }
}
