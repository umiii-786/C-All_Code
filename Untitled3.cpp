#include<iostream>
using namespace std;
int main(){
	char *p[7];
	int i=0,j=0;
	cout<<"\t enter days name :\t\n";
	/*cout<<"neter your first str:";
	cin>>p[i];
	cout<<"your first str:"<<p[i];*/
	
	for(int i=0;i<7;i++){
		cout<<"enter days "<<i+1<<" name :";
		cin>>p[i];
		cout<<endl;
	}
		
	for(int i=0;i<7;i++){
		cout<<"days "<<i+1<<" name is:"<<p[i];
		cout<<endl;
	}
	
	
	return 0;
}
