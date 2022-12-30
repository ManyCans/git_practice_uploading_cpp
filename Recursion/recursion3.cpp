#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

//find first and last position of an element
//Through recursion
int firstoccur(int arr[],int n,int k,int i){
	if(i==n){
		return -1;
	}
	if(arr[i]==k){
		return i;
	}
	return (arr,n,k,i+1);	
	//returns first occurence of integer k using iterator i
}
int lastoccur(int arr[],int n,int k,int i){
	if(i==n){
		return -1;
	}
	int lastarra= lastoccur(arr,n,k,i+1);// We store and go till last 
	
	if(lastarra!=-1){
		return lastarra;
	}
	if(arr[i]==k){ 
		return i;
	}
	return -1;
}
int main(){
	int arr[9]={1,2,4,6,2,8,3,2,1};
	cout<<lastoccur(arr,9,4,0);
}