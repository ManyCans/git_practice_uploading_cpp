#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
	// Gives 1 Max sum of subarray possible in all array ---O(n)
int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum_upto_i_array[n];
	int sum=0;
	for(int i=0; i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		sum_upto_i_array[i]=sum;
		}
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(i!=j){
				int diff=sum_upto_i_array[i]-sum_upto_i_array[j];
				maxsum=max(maxsum,diff);
			}
		}
	}
	cout<<maxsum;
	return 0;
}