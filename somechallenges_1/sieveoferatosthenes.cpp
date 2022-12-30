#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

//This prints all the prime numbers upto n
void sieveoferaththenes(int n){ 
	int prime[100]={0};
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<n;i++){
		if(!prime[i]){
			cout<<i<<" ";
		}
	}
}

void primefactors(int n){  //amazing function that prints frime factors

    // array is created with smallest prime factor of i is at position arr[i] 
	int spf[100]={0};
	for(int i=2;i<=n;i++){
		spf[i]=i;
	}
	for(int i=2;i<=n;i++){
		for(int j=i*i;j<=n;j+=i){
			if(spf[j]==j){
				spf[j]=i;
			}
		}
	}

    //35/5 gives 7 , we check spf of 7 and it gives 7  and divde it by same .we do it till n=1
	while(n!=1){
		cout<<spf[n]<<" ";
		n=n/spf[n];
	}
}

int main(){
	sieveoferaththenes(50);
	
	
}