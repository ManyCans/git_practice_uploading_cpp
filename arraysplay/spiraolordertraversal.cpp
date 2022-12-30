#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
int row_str=0,col_str=0,col_end=n-1,row_end=m-1; 
	while(row_str<=row_end && col_str<=col_end){
		for(int i=row_str;i<=row_end;i++){
			cout<<arr[col_str][i]<<" ";
		}
		col_str++;
		cout<<endl;
		for(int i=col_str;i<=col_end;i++){
			cout<<arr[i][row_end]<<" ";
		}
		row_end--;
		cout<<endl;
		for(int i=row_end;i>=row_str;i--){
			cout<<arr[col_end][i]<<" ";
		}
		col_end--;
		cout<<endl;
		for(int i=col_end;i>=col_str;i--){
			cout<<arr[i][row_str]<<" ";
		}
		row_str++;
		cout<<endl;
	}
	return 0;
}