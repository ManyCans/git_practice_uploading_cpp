#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int sum(int n){
	if(n==1){return 1;}
	else{
		return n+ sum(n-1);
	}
}

int power(int a,int raised){
	if(raised==1){
		return a;
	}
	return (a*power(a,raised-1));
}
int factorial(int n){
	if(n==1){return 1;}
	return n*factorial(n-1);
}
int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(){
	cout<<fibonacci(6)<<endl;
}