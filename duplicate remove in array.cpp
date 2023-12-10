#include<iostream>
using namespace std;
int main(){
	int array[10]={23,33,44,33,1,2,8,9,12,11};
	int n=10;
	    for(int j=0;j<n;j++){
	    for(int i=j+1;i<n;i++){
	    	
		if(array[j]==array[i]){
			for(int k=i;k<n;k++){
				 array[k]=array[k+1];
			}	
		    n--;
		    
			
			
			
			j--;
		}
	}
}
	cout<<" your elemment remove duplicate is "<<endl;
	
	for(int i=0;i<10;i++){
		cout<<array[i]<<"\t";
	}
	
	return 0;
}

