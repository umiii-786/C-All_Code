#include<iostream>
using namespace std;
void input(char names[][10]);
void print(char names[][10]);
int main(){
	char list[7][10];
	cout<<" enter the list of names :"<<endl;
	input(list);
	cout<<" your list of name is :"<<endl;
	print(list);
	return 0;
}
void input(char names[][10]){
    int i=0;
    while(i<7){
    	cin>>names[i];
		cout<<endl;
    	i++;
	}
}
void print(char names[][10]){
    int i=0;
    while(i<7){
    	cout<<names[i];
		cout<<endl;
    	i++;
	}
}
