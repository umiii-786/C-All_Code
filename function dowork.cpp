#include<iostream>
using namespace std;
void dowork(int *n1,int *n2,int *sum,int *pro,float *aver);

int main(){
int num1,num2,sum,prod;
float aver;
cout<<"enter the num1:"<<endl;
cin>>num1;
cout<<"enter the num2:"<<endl;
cin>>num2;
dowork(&num1,&num2,&sum,&prod,&aver);
cout<<"the sum of "<<num1<<","<<num2<<" is"<<sum<<endl;
cout<<"the product of "<<num1<<","<<num2<<" is "<<prod<<endl;
cout<<"the average of "<<num1<<","<<num2<<" is"<<aver<<endl;

return 0;
}

void dowork(int *n1,int *n2,int *sum,int *pro,float *aver){
	*sum=(*n1)+(*n2);
    *pro=(*n1)* (*n2);
    *aver=((*n1)+(*n2))/2;
}
