#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
	int n,m,target;
	cin>>n>>m>>target;
	int arr[n][m];
	//input
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

//      This part is O(n) ,it searches for a value in sorted array
	int ro=m-1,co=0;
	bool found =false;
	while(ro>-1 && co<n){
		if(arr[co][ro]==target){
			found = true;
			break;
		}
		else if(arr[co][ro]>target){
			ro--;
		}
		else{
			co++;
		}
	}



	if(found){
		cout<<co<<" and "<<ro<<endl;
		cout<<"Contain "<<target;
	}
	else{
		cout<<"Target not found"<<endl;
	}

	return 0;
}