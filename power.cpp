#include<iostream>
using namespace std;
int main(){
int num,exponent;
long power=1;
cout<<"enter the number :";
cin>>num;
cout<<"enter the power :";
cin>>exponent;
for(int i=1;i<=exponent;i++){
	power=num*power;
}
cout<<"the ansewr"<<power;

return 0;		
}

