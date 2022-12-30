#include <bits/stdc++.h> 
#include <algorithm>
#include <string>

using namespace std;
	
void reverse(string str,int n,int i){
	if(i==n){return;}
	reverse(str,n,i+1);
	cout<<str[i];}
void reverser(string str){
	if(str.length()==0){return;}
	reverser(str.substr(1));
	cout<<str[0];}
void pitonum(string str){
	if(str.length()==0){return;}
	if(str[0]=='p'&& str[1]=='i'){cout<<"3.14";
		pitonum(str.substr(2));}
	else{cout<<str[0];
		pitonum(str.substr(1));}}
void towerofhanoi(int n,char src,char des,char help){
	if(n==0){
		return;
	}
	towerofhanoi(n-1,src,help,des);
	cout<<"Ring no. "<<n<<" is put in "<<des<<endl;
	towerofhanoi(n-1,help,des,src);}




int main(){
	string a="hello";
	reverse(a,a.length(),0);
	reverser(a);
	pitonum("piasdvpisapipo");
    towerofhanoi(3,'s','d','h');
}