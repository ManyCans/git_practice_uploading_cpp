#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){cin>>arr[i];}
	int csum=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]+csum<=arr[i]){
			csum=arr[i];
		}
		else{
			csum+=arr[i];
		}
	}
	cout<<csum<<" ";
	return 0;
}