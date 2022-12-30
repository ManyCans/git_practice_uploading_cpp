#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

bool getbit(int a,int pos){
	return ((a & (1<<pos))!=0); // gives true if != 0 
}

int setbit(int n,int pos){
	return n | (1<<pos);	
}

int uniq(int arr[],int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum= (xorsum^arr[i]);
        //XOR is like ^
	}
	return xorsum;
}

void twouniq(int arr[],int n){
	int xor2sum=0;
	for(int i=0;i<n;i++){
		xor2sum=(xor2sum^arr[i]);
	}
	int setbit=0;
	int pos=0;
	while(setbit!=1){
		setbit = xor2sum & 1; 
		pos++;
		xor2sum=xor2sum>>1;
	}
	int otherxor=0;
	int anotherxor=0;
	
	xor2sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]&(1<<pos))
		otherxor=(otherxor^arr[i]);
		else{
			anotherxor=(anotherxor^arr[i]);
		}
	}
	cout<<otherxor<<" "<<anotherxor<<endl;
}


int uniqinthree(int arr[],int n){
	int result=0;
	for(int i=0;i<64;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(getbit(arr[j],i))
			sum++;
		}
		if(sum%3!=0){
			result= setbit(result,i);
		}
	}
	return result;
}


int main(){
	int arr[5]={10,8,1,10,8};
	cout<<uniq(arr,5)<<endl;
	
}