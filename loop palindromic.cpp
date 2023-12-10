#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;i++){
			cout<<" ";
		}
		
		for(int l=i;l>=1;l--){
			cout<<l<<" ";
		}
		for(int k=n;k>=1;k--){
			cout<<k<<" ";
		}
		if(i!=1){
		for(int m=2;m<=i;m++){
			cout<<m<<" ";
		}
	}
		cout<<endl;
	}
	return 0;
}
