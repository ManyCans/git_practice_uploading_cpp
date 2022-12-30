#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string k="abnresd";
	for(int i=0;i<k.size();i++){
		if(k[i]>='a' && k[i]<='z'){
			k[i]-=32;
		}
	}
	cout<<endl;
	cout<<k;
	//Function to convert directly in upper case
	transform(k.begin(),k.end(),k.begin(),::tolower);
	cout<<k;
	return 0;
}