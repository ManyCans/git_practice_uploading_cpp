#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


bool kval(int n, int arr[],int k){
	int low= 0;
	int high =n-1;
	while(low<high){
		if((arr[low]+arr[high])<k){
			low++;
		}
		else if((arr[low]+arr[high])>k){
			high--;
		}
		else if((arr[low]+arr[high])==k){
			cout<<low+1<<" and "<<high+1<<endl;
			return true;
		}
		else{
			return false;
		}
		
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	int k;
	cin>>k;
	for(int i=0;i<n;i++){cin>>arr[i];}
	if(kval(n,arr,k)){
		cout<<"Answer";
	}
	else{
		cout<<"No Output or wrong sorting"<<endl;
	}
	return 0;
}