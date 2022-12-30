#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
	int n;
	cin>>n;
	cin.ignore();
	//to travel to next line
	char arr[n+1];
	//This is just for getting n char
	cin.getline(arr,n);
	cin.ignore();
	//This is to take care or ignore extra chars
	int i=0,len=0,maxl=0;
	int st =0,maxst=0;
    //st stores position of words and max st stores position of max word
	while(1){
		if(arr[i]==' '||arr[i]=='\0'){
			if(len>maxl){
				maxl=len;
				maxst=st;
				}
			len=0;
			st=i+1;
		}
		else{
			len++;
			}
		if(arr[i]=='\0'){break;}
		i++;
		}
	cout<<maxl<<endl;
    
	for(int i=0;i<maxl;i++){
		cout<<arr[i+maxst];
	}
	
	return 0;
}