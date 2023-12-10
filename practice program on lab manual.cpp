#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
//struct date{
//	char name[];
//	int year;
//	int month; 
//};

//int nthfib(int n);
//int first_occ(int array[],int n);
//int sum_of_array(int *arr,int size);
int main(){
	int n;
	int fact=1;
	cout<<"enter any number :";
	cin>>n;
	while(n>0){
		for(int i=1;i<=n;i++){
			fact*=i;
		}
		cout<<"the factorial of "<<n<<" is "<<fact<<endl;
		fact=1;
	    cout<<"enter any number :";
	    cin>>n;
	}


	cout<<"the factorial of negative number is not possible "<<endl;
	
	
	
//	int array[10];
//	int sum=0;
//	for(int i=0;i<10;i++){
//		cout<<" enter the element at index "<<i<<"=";
//		cin>>array[i];
//		sum+=array[i];
//	}
//	cout<<"the sum of array element is "<<sum<<endl;
	
	
	
	
	
	
//	int a[3][2]={{12,11},{9,8},{10,6}};
//	int b[2][2]={{13,15},{17,16}};
//	int sum=0;
//	int result[3][2];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<2;j++){
//			
//			for(int k=0;k<2;k++){
//				sum+=a[i][k]*b[k][j];
//			}
//			result[i][j]=sum;
//			sum=0;
//		}
//	}
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<2;j++){
//			cout<<result[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
	
	
	
	
	
	
	
	
//struct date date1;
//int day;
//cout<<" enter the year no: ";
//cin>>date1.year;
//cout<<" enter the month no:";
//cin>>date1.month;
//cout<<" enter the day name :";
//cin>>date1.name;
//
//if(date1.name=="monday" || date1.name=="MONDAY"){
//	day=1;
//    cout<<"\t"<<"1"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}	
// if(date1.name=="TUESDAY" || date1.name=="tuesday"){
//	day=2;
//	cout<<"\t"<<"2"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}
// if(date1.name=="wednesday" || date1.name=="WEDNESDAY"){
//	day=3;
//	cout<<"\t"<<"3"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}
// if(date1.name=="thrusday" || date1.name=="THRUSDAY"){
//	day=4;
//	cout<<"\t"<<"4"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}
// if(date1.name=="friday" || date1.name=="FRIDAY"){
//	day=5;
//	cout<<"\t"<<"5"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}	
// if(date1.name=="saturday" || date1.name=="SATURDAY"){
//	day=6;
//	cout<<"\t"<<"6"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}
// if(date1.name=="sunday" || date1.name=="SUNDAY"){
//	day=7;
//	cout<<"\t"<<"7"<<"/"<<date1.month<<"/"<<date1.year<<endl;
//}
//	else{
//		cout<<"invalid name of day ";
//	}
	
	
	
	
	
//	question 1
//	int n;
//	int reverse;
//	cin>>n;
//	while(n!=0){
//		reverse=(reverse)*10+n%10;
//		n=n/10;
//	}
//	cout<<reverse<<endl;
//	int row=8;
//	for(int i=1;i<=row;i++){
//		
//		for(int j=row-1;j>=i;j++){
//			cout<<" ";
//		}
//		for(int k=1;k<=(i*2)-1;k++){
//			cout<<"*";
//		}	
//		cout<<endl;
//	}
//	
//	return 0;
//}
//int n=8;
//for(int i=1;i<=n;i++){
//	
//	for(int j=n-1;j>=i;j--){
//		cout<<" ";
//	}
//	
//	for(int k=1;k<=(i*2)-1;k++){
//		cout<<"*";
//	}
//	cout<<endl;
//	
//}


//int number;
//int count;
//cout<<"enter the number :";
//cin>>number;
//while(number>0){
//	number=number/10;
//	++count;
//}
//cout<<" given number is a "<<count<<" digit number "<<endl;

//int number ;
//cout<<"enter the number :";
//cin>>number;
//int first,last=number%10,sum=0;
//while(number>0){
//	
//	sum+=number%10;
//	number=number/10;
//}
//cout<<"the sum of digits of given number is :"<<sum<<endl;

//int number;
//cout<<"enter the number :";
//cin>>number;
//
//int first ,last,mid,temp,swap;
//temp=number;
//last=number%10;
//while(number>0){
//	first=number%10;
//	number=number/10;
//}
//number=temp;
//number=number/10;
//
//while(number>10){
//	mid=mid*10+number%10;
//	number=number/10;
//}
//swap=last;
//while(mid>0){
//	swap=swap*10+mid%10;
//	mid=mid/10;
//}
//swap=swap*10+first;
//cout<<swap;




//
//char str[]="umair";
//char str2[]="jatt";
//strcat(str,str2);
//cout<<str<<endl;
////cout<<str2<<endl;
//int count=0;
//for(int i=0;str[i]!='\0';i++){
//	++count;
//}
//cout<<"the lenght of string is "<<count<<endl;
//}

//char ch='u';
//int loc;
//char *str="dwiheuruowenv";
//for(int i=0;str[i]!='\0';i++){
//	if(ch==str[i]){
//		loc=i;
//		break;
//	}
//}
//
//cout<<"the first occerence of charater "<<ch<<" in string is at "<<loc<<" location"<<endl;

//int temp;
//int k=1;
//int array[10]={8,12,11,1,5,6,31,21,18,3};
//for(int i=0;i<10;i++){
//	for(int j=k;j<10;j++){
//		if(array[i]>array[j]){
//			temp=array[i];
//			array[i]=array[j];
//			array[j]=temp;
//		}
//	}
//	++k;
//}
//
//for(int i=0;i<10;i++){
//	cout<<array[i]<<"\t";
//}

//
//int max,min;
//int array[10]={23,32,11,44,9,8,7,12,31,45};
//max=array[0];
//min=array[0];
//for(int i=1;i<10;i++){
//	if(max<array[i]){
//		max=array[i];
//	}
//	if(min>array[i]){
//		min=array[i];
//	}
//}
//
//cout<<"the maximum number in your array is :"<<max<<" and the minimum number is :"<<min<<endl;
 
 
// int array[10]={1,2,3,4,5,6,7,8,9,10};
//int sum=sum_of_array(array,10);
//
//cout<<"the sum of array element is "<<sum<<endl;
//

//int matrix[2][2]={{32,12},
//                  {19,20}};
//	int row1,row2,column1,column2;
//	for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		if(i==0){
//			row1+=matrix[i][j];
//			column1+=matrix[j][i];
//		}
//		if(i==1){
//			row2+=matrix[i][j];
//			column2+=matrix[j][i];
//		}
//	}
//	}
//	
//cout<<"the sum of row1 is "<<row1<<" and column1 is :"<<column1<<" and sum of row2 :"<<row2<<" and column2 is "<<column2<<endl;
//
//int matrix[3][3]={{1,0,0},
//                  {0,1,0},
//                  {0,0,1}};
//	int flag=0;
//	int row=3,column=3;
//	if(row==column){
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			if(i==j && matrix[i][j]!=1){
//				flag=1;
//			}
//			else if(i!=j && matrix[i][j]!=0 ){
//				flag=1;
//			}
//		}
//	}
//	
//	if(flag==0){
//		cout<<"given matrix is identity";
//	}
//	else{
//		cout<<" given matrix is not identity";
//	}
//}

//int n=6;
//int nth=nthfib(n);
//
//cout<<"the "<<n<<" term of fibonacci series is :"<<nth<<endl;
//int array[6]={6,5,3,6,8,2};
//int loc=first_occ(array,6);
//cout<<"given number is found in array and their location is :"<<loc<<endl;
//}
//
//int first_occ(int array[],int n){
//	int loc;
//	int number=2;
//	if(number==array[n]){
//		loc=n;
//	}
//	else{
//		first_occ(array,n-1);
//	}
//	
//return loc;	

//fstream file;
//file.open("umiii.txt",ios::out);
//if(!file){
//	cout<<"file does not exist ";
//}
//else{
//	cout<<"file does exist ";
//	file<<" umiii is my nick name ";
//}

//int year;
//cout<<"enter the year :";
//cin>>year;
//if(year%400==0){
//	cout<<"year is leap year ";
//}
//else if(year%4==0 && year%100!=0){
//	cout<<"year i leap year ";
//} 
//else{
//	cout<<" year is not leap year ";
//}

//fstream file;
//string str;
//int newline=0,alpha=0,digit=0,tabs=0,space=0;
//file.open("text.txt",ios::in);
//if(!file){
//	cout<<"file doest not exist "<<endl;
//}
//
//else{
//	cout<<"file is exist "<<endl;
//	getline(file,str);
//	while(file.eof()==0){
//		newline+=1;
//		for(int i=0;str[i]!='\0';i++){
//		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
//			alpha+=1;
//		}
//		else if(str[i]>='0' && str[i]<='9'){
//			digit+=1;
//		}
//		else if(str[i]=='\t'){
//			tabs+=1;
//		}
//		else if(str[i]==' '){
//			space+=1;
//		}
//	}
//    getline(file,str);
//}
//}
//cout<<"there are "<<space<<" space ,"<<tabs<<" tabs,"<<alpha<<" alpha,"<<digit<<" digits and "<<newline<<" newlines in my file "<<endl;

//char str1[10],str2[10];
//cout<<"enter the string :";
//cin>>str1;
//strcpy(str2,str1);
//strrev(str2);
//if(strcmp(str1,str2)==0){
//	cout<<"given string is palindrome "<<endl;
//}
//else{
//	cout<<" given string is not a palindrome "<<endl;
//}

//int n1,n2;
//cin>>n1;
//cin>>n2;
//switch(n1>n2){
//	case 0:{
//		cout<<"number second is greater ";
//		break;
//	}
//	case 1:{
//		cout<<"number first is greater ";
//		break;
//	}
//}







}

//int nthfib(int n){
//	if(n==0 || n==1){
//		return n;
//	}
//	
//	int fibN1=nthfib(n-1);
//	int fibN2=nthfib(n-2);
//	
//	int fibN=fibN1+fibN2;
//	return fibN;
//}
//int sum_of_array(int *arr,int size){
//	int sum=0;
//	for(int i=0;i<10;i++){
//		sum+=(*arr);
//		++arr;
//	}
//	
//	return sum;
//}
