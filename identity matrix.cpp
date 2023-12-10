#include<iostream>
using namespace std;
int main(){
	int row=2;
	int column=2;
	int matrix[row][column]={
	               {1,0},
				   {0,1}};
	int identity=0,end;	
	if(row-column==0){
	end=row;	     
 for(int i=0;i<end;i++){
 if(matrix[i][i]==1){
 	identity+=1;
   }
   }
   }
if(identity !=0){
	cout<<" matrix is identity " <<end;
}
else{
	cout<<" given matrix is not identity matrix "<<endl;
}
  
  return 0;
}
