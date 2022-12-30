#include<bits/stdc++.h>
using namespace std;
int main() {
int tcs;
  cin>>tcs;
  while(tcs!=0){
  string str;
  getline(cin,str);
    int n= str.length();
    if(str.length()>10){
      cout<<str[0]<<n-2<<str[n-1]<<endl;
    }
    else{
      cout<<str<<endl;;
    }
    }
}