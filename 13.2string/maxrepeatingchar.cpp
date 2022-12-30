#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string k="growing smarter";
	int arr[26];
	for(int i=0;i<26;i++){arr[i]=0;}
	for(int i =0;i<k.size();i++){
		arr[k[i]-'a']++;
	}
	char i2='a';
	int max=0;
	for(int i=0;i<26;i++){
		if(arr[i]>max){
			max=arr[i];
			i2='a'+i;
		}
	}
	cout<<i2<<" Element is repeated "<<max<<" times."<<endl;
}