#include<iostream>
using namespace std;

int main(){
int array[10]={34,77,88,55,44,12,11,1,3,99};
int k=1;
int sort;
for(int i=0;i<9;i++){
	for(int j=k;j<8;k++){
		if(array[i]<array[j]){
			sort=array[i];
			array[i]=array[j];
			array[j]=sort;
		}
	}
	++k;
}	
	
	cout<<" your sorted array is :"<<endl;
	for(int  i=0;i<9;i++){
		cout<<array[i]<<endl;
	}
	return 0;	
}
     
