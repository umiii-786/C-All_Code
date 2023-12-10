#include<iostream>
using namespace std;

//void swap(int ,int );

//void swap(int *n1,int *n2); 


int main(){
int number;
int fact=1;
cout<<"enter any number :";
cin>>number;
while(number>=0){
	for(int i=1;i<=number;i++){
		fact*=i;
	}
	cout<<"the factorial of "<<number<<" is "<<fact<<endl;
	fact=1;
	cout<<"enter any number :";
    cin>>number;
}
cout<<"the factoriAL OF NEGATIVE NUMBER IS not possible"<<endl;	
	return 0;
}


//void swap(int *n1,int *n2){
//cout<<n1<<endl;
//}
