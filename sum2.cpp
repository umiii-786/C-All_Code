#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n>0){
		sum+=n%10;
	}
	cout<<" the sum of digigt of n is :"<<sum;
	return 0;
}
