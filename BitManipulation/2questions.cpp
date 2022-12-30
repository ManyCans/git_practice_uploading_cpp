#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool power2(int n){
	return (n&&!(n&(n-1)));
}

int noof1(int n){
	int count=0;
	while(n!=0){
		n= (n & n-1);
		count++;
	}
	return count;
}


void allsubsets(int arr[],int n){
    for (int i = 0; i <(1<<n); i++)
    {
        for(int j=0;j<n;j++){
			if(i & (1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
    }}
    


int main(){

}