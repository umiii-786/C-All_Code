#include<iostream>
using namespace std;
int main(){
	int arr[10]={8,7,5,3,9,10,11,1,2,12};
	int temp;
	for(int i=1;i<=9;i++){
    	for(int j=0;j<9;j++){
	      if(arr[j]>arr[j+1]){
	          temp=arr[j];
	          arr[j]=arr[j+1];
	          arr[j+1]=temp;
	        
			}
		}
	}
	cout<<" your array after sorting  is "<<endl;
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
}
