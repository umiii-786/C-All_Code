#include<iostream>
using namespace std;
int main(){
	int arr[5]={23,55,22,66,1};
	int max=arr[0];
	int min=arr[0];
	int i=0,j=0;
	while(i<5){
		if(max<arr[i]){
			max=arr[i];
		}
		i++;
	}
	while(j<5){
		if(min>arr[j]){
			min=arr[j];
		}
		j++;
	}
	cout<<"in your aarray the smallest number is "<<min<<" and largest n number is "<<max<<endl;
	return 0;
}
