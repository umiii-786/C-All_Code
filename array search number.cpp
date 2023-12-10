#include<iostream>
using namespace std;
int main(){
	int num[10]={34,65,77,88,77,12,13,14,16,77};
	int  choice,count=0,loc1=0,loc2=0;
	cout<<" enter the number you want tu find :";
	cin>>choice;
	for(int i=0;i<10;i++){
		if(choice==num[i]){
			count=count+1;
			if(count==1){
				loc1+=(i+1);
	       }
	       if(count==2){
	       	loc2+=(i+1);
		   }
		   if(count==3){
	       loc2+=(i+1);
		   }
	   }
	}
	if(loc1!=0 && loc2!=0 ){
		cout<<"your number is found and their first location is "<<loc1<<" and their secand location is "<<loc2;
	}
	else if(loc1!=0){
		cout<<"your number is found and their  location is "<<loc1;
	}
	else{
		cout<<" number is not found in your array";
	}
	return 0;
}
