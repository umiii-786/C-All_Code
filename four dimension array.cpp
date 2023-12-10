#include<iostream>
using namespace std;
int main(){
	
	 int matrix[1][3][3][3]={
	                     {
						  {1,2,3},
	                      {2,5,6},
	                      {7,5,4}
						  },
	                      
	                  {
					   {5,3,7},
	                   {4,1,2},
	                   {1,10,8}
					   },
	                   
	                   {
					   {2,5,6},
					   {1,10,9},
					   {6,5,8}
					   },
				};
	
					   
	for(int i=0;i<=1;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				for(int l=0;l<3;l++){
					cout<<matrix[i][j][k][l];
				}
			}
		}
	}			   
	
}
