#include<iostream>
using namespace std;
int main(){
	int arr[10]={12,13,9,8,6,1,54,43,15,30};
	int k=1;
	for(int i=0;i<9;i++){
		for(int j=k;j<10;j++)
		if(arr[i]>arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		++k;
	}
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"\t";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
