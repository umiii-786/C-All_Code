#include<iostream>
using namespace std;

void table (int arr[][10], int row,int n[]);
void print (int arr[][10], int row);

int main(){
	
	int num[2];
	int array[2][10];
	cout<<"enter the num1 and num2 whose table you want tu store in your 2d array :";
	cin>>num[0];
	cin>>num[1];
	table(array,2,num);
	print(array,2);
	
	return 0;
}

void table(int arr[][10], int row,int cl,int n[]){
	int k=1;
	for(int i=0;i<row;i++){
	for(int j=0;j<10;j++){
		arr[i][j]=n[i]*k;
		++k;
	}	
}

void print(int arr[][10],int row){
	for(int i=0;i<row;i++){
	cout<<"\t the table of "<<n[i]<<" is ";
	for(int j=0;j<10;j++){
		cout<<arr[i][j]<<endl;
    }
	}	
}
