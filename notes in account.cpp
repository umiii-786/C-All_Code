#include<iostream>
using namespace std;
int main(){
	int amount;
	int notes;
	int total_notes;
	cout<<" enter the amount :";
	cin>>amount;
	cout<<" enter the note no :";
	cin>>notes;
	total_notes=amount/notes;
	
	if(notes==10)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	else if(notes==20)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	else if(notes==50)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	else if(notes==100)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	else if(notes==1000)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	else if(notes==5000)
	cout<<" the total number of "<<notes<<" rupees notes in your account is "<<total_notes;
	
	else
	cout<<" invalid note no";
	return 0;
}
