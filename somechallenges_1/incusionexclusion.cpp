#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int divisible(int n,int a,int b){ //1 to n numbers divisble by b and a
	int k= (n/a)+n/b-n/(a*b);
	return k;
	
}
int gcd(int a,int b){
	while(b!=0){
	int rem=a%b;
		a=b;
		b=rem;
	}
	return a;
	
}

int main(){
	cout<<gcd(24,42)<<endl;
}