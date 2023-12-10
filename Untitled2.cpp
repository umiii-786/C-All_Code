#include<iostream>
using namespace std;
int main(){
	char name[]={"umair","nawabshah","pakistan"};
	char *pt[3];
	
	pt[0] = &name[0];
	pt[1]= &name[1];
	pt[2]= &name[2];
	cout<<"\t the detail of first persin is \t:";
	for(int i=0;i<3;i++){
		cout<<*pt[i];
	}
	return 0;
}

