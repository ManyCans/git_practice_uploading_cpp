#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

bool sorteds(int arr[],int n){
	if(n==1){
		return true;
	}
	return ((arr[0]<arr[1])&&(sorteds(arr+1,n-1)));
	// gives true if array is sorted
}

void incprin(int n){
	if(n==1){
		cout<<1<<" "<<endl;
		return;
	}
	else{
	cout<<n<<" ";
	incprin(n-1);}
	// print all numbers from n to 1 using recursion
}

void decprin(int n){
	if(n==1){cout<<1<<" ";}
	else{
	decprin(n-1);
	cout<<n<<" ";}
	// print all numbers from 1 to n using recursion
}

int main(){
	int arr[6]={1,2,3,4,6,1};
	cout<<sorteds(arr,6);
}