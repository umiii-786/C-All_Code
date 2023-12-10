#include<iostream>
using namespace std;

//int  count(char str[],int size);
//int main(){
//	char str[10]="umairjatt";
//int check=	count(str,10);
//	cout<<check<<endl;
//	return 0;
//}
//
//int count(char str[],int size){
//	int count=0;
//	int i=0;
//	if(str[i]!='\0'){
//		if(str[i]=='a'){
//			count++;
//		}
//		i++;
//		count(size-1);
//	}
//	
//	return count;
//}

//void print(int n);
//int fact(int n);

//void dec(int n){
//	if(n==0){
//		return;
//	}
//	else{
//		cout<<n;
//		dec(n-1);
//	}
//}
//
//void incr(int n){
//	if(n==0){
//		return ;
//	}
//	else{
//		incr(n-1);
//		cout<<n;
//	}
//}

int power(int pow){
if(pow==0){
	return 1;
}

else{	
int power1=power(pow-1);

	return 5*power1;
}

}

int main(){
	
int n=5;
int p=power(3);
cout<<"the number "<<n<<" having power "<<"3"<<" is ="<<p<<endl;
return 0;
	
}

//void print(int n){
//	if(n<=1){
//		return ;
//	}
//	else{
//		printf("good\n");
//		print(n-1);
//		printf("good bye\n");
//	}
//}
//int fact(int n){
//	if(n<=1){
//		return 1;
//	}
//	else{
//		int factN=n;
//		int factN1=fact(n-1);
//		
//		return factN+factN1;
//	}
//}




