#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int tilingssue(int n){
	if(n==1){return 1;}
	else if(n==2){return 2;}
	
	else{
		return tilingssue(n-1)+tilingssue(n-2);
	}
}
int pairingfriends(int n){
	if(n<3){
		return n;}
	else{
		return (pairingfriends(n-1)+ (n-1)*pairingfriends(n-2));}
}
int knapsackproblem(int varr[],int warr[],int n,int w){
	if(w<=0 || n==0){
		return 0;
	}
	
	if(w<warr[n-1]){
		return knapsackproblem(varr,warr,n-1,w);
	}
	
	return max(knapsackproblem(varr,warr,n-1,w-warr[n-1])+varr[n-1],
	knapsackproblem(varr,warr,n-1,w));
	
}


int main(){
	// cout<<tilingssue(5)<<endl;
	// cout<<pairingfriends(4)<<endl;
	int warr[]={10,20,30};
	int varr[]={100,50,150};
	int w=50;
	cout<<knapsackproblem(varr,warr,3,50)<<endl;
	
		
}