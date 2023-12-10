#include<iostream>
using namespace std;
int main(){
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int end=9;
	int loc=-1;
	int mid,num;
	cout<<" enter the number you want to find ";
	cin>>num;
	while(i<=end){
		mid=(i+end)/2;
		if(array[mid]==num){
			loc=mid;
			break;
		}
		else if(num<array[mid]){
			end=mid-1;
		}
		else{
			i=mid+1;
		}
	}
	if(loc!=-1){
		cout<<" your number is found and their location is :"<<loc;
	}
	else{
     cout<<" your number is not found ";
	}
	
	return 0;
}
