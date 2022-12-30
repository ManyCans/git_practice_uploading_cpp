#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){cin>>arr[i];}
	int sum=0;
	for(int i=0;i<n;i++){sum+=arr[i];}
	int kadane=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		kadane+=((-1)*arr[i]);
		if(kadane<0){
			kadane=0;
		}
		maxsum=max(maxsum,kadane);
	}
	cout<<sum+maxsum<<endl;

	return 0;
}