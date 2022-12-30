#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
using namespace std;

//return permutations for a distinct elements in array
vector<vector<int>> ans; // gobal vector t store answers

void permute(vector<int> &a,int idx){ 
	//when idx len=n we put answer in global varible 
	if(idx==a.size()){
		ans.push_back(a);
		return;
	}
	for(int i=idx;i<a.size();i++){
        if(a[idx]!=a[i] && idx!=i){
		swap(a[idx],a[i]);
		permute(a,idx+1);
		swap(a[idx],a[i]);
        }
        permute(a,idx+2);
	}
	return;
}



int main(){
	int n;cin>>n;
	vector<int> a(n);
	for(auto &i:a)
		cin>>i;
	permute(a,0);
    // sort(a.begin(),a.end());
	// do{
	// 	ans.push_back(a);
	// }while(next_permutation(a.begin(),a.end()));
	for(auto &v:ans){
		for(auto &i:v){
			cout<<i<<" ";}
		cout<<endl;}
		
}