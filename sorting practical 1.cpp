#include<iostream>
using namespace std;
int main(){
	int arr[10]={23,33,11,1,2,5,9,8,56,43};
	int swap,k=1;
	cout<<" your array element before sorting are "<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"  ";
		
	}
	
	for(int j=0;j<9;j++){
	for(int i=k;i<=9;i++){
		if(arr[j]>arr[i]){
			swap=arr[i];
			arr[i]=arr[j];
			arr[j]=swap;
		}
	}
	++k;
}
    cout<<endl;
    
    cout<<"your element of array after sorting are :"<<endl;
	for(int j=0;j<10;j++){
		cout<<arr[j]<<"  ";
	}
	
	return 0;
}
