#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter n:";
	cin>>n;
	int first,last,swap,temp,mid;
	temp=n;
	last=n%10;
	n=n/10;
	while(n>10){
		n=n%10;
		n=n/10;
	}
	first=n;
	n=temp;
	n=n/10;
	while(n>10){
		mid=mid*10+n%10;
		n=n/10;
	}
	swap=last;
	while(mid>0){
		swap=swap*10+mid%10;
		mid=mid/10;
	}
	
	swap=swap*10+first;
	cout<<" the number after swap is "<<swap<<endl;
	return 0;
}
