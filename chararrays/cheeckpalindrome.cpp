#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	char arr[n+1];
	cin>>arr;
	bool check=1;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			check=0;
			break;
		}
	}
	if(check){
		cout<<arr<<" is an palindrome"<<endl;
	}
	else{
		cout<<arr<<" is not a palindrome"<<endl;
	}
	

	return 0;
}