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
	int k,l;
	cin>>k>>l;
	int arr2[k][l];
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
			cin>>arr2[i][j];
		}
}
	if(k!=m){
		cout<<"Invald matrix for multiplication"<<endl;
	}
	else{
		int arr3[n][l];
		for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			arr3[i][j]=0;
		}
	} 

//Multiplication with Time complexity= O(n^3)
		for(int i=0;i<n;i++){
			for(int j=0;j<l;j++){
				for(int k=0;k<m;k++)
				arr3[i][j]+=arr[i][k]*arr2[k][j];
			}
		}
		
		//Output here
		for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }	
	}
	return 0;
}