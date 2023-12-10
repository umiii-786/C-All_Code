#include<iostream>
using namespace std;
int main(){
	int arr[10]={11,12,13,6,7,8,9,15,1,33};
	int temp;
	int k=1;
	cout<<" your array before sorting is "<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		for(int j=k;j<=9;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
	       }
	    }
	    ++k;
	}
	cout<<" your array after sorting is "<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
		
	return 0;
	
}
