#include<iostream>
using namespace  std;

int main(){
	
	int matrix[2][2]={{1,0},
	                  {0,1}};
	      int row=0;            
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(i-j==0){
				if(matrix[i][j]==1){
					row+=1;
				}
			}
		}
		
	}     
	if(row!=0){          
	cout<<" given matrix is identity and this matrix contain "<<row<<" rows "<<endl;
}
	
	
	return 0;
}
