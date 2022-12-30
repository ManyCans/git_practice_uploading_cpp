#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void permutations(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
	string kk =str;
	for(int i=0;i<str.length();i++){
		char l =str[i];
		permutations(str.erase(i,1),ans+l);
		str=kk;
	}		
}
int noofways(int st,int lpos){
	if(lpos==st){
		return 1;
	}
	if(lpos<st){
		return 0;
	}
	int sum =0;
	for(int i=1;i<=6;i++){
		sum+=(noofways(st+i,lpos));
	}
	return sum;
}
int noofpathsinmaz(int m,int n){
	if(m==2 && n==2){
		return 2;
	}
	else if(m==2 || n==2){
		if(m==2){return n;}
		else{return m;}
	}
	else{
		return noofpathsinmaz(m-1,n) +noofpathsinmaz(m,n-1);		
	}
}

int main(){
	// permutations("abc","")<<endl;
	// cout<<noofways(1,5)<<endl;
	cout<<noofpathsinmaz(3,4)<<endl;
}


