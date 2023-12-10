#include<iostream>
using namespace std;

int main(){
	int matrix[3][3]={{23,77,8},
	                 {50,12,14},
					 {20,25,12}};
					  
	cout<<" your real matrix is "<<endl;
	
    for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<matrix[i][j]<<" ";
	} 
	cout<<endl;	
    }
    
    int swap;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		
	swap=matrix[i][j];
	matrix[i][j]=matrix[j][i];
	matrix[j][i]=swap;
	
		}
	}
	
    cout<<" your matrix after taking transpose is "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
 
    return 0;
}



