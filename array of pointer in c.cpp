#include<iostream>
using namespace std;
int main(){
	char name[]="umair";
	char city[]="nawabshah";
	char country[]="pakistan";
	char *pt[3];
	
	pt[0]= &name[0];
	pt[1]= &country[0];
	pt[2]= &city[0];
	cout<<"\t the detail of first persin is \t:";
	for(int i=0;i<3;i++){
		cout<<*pt[i];
	}
	return 0;
}

