#include <bits/stdc++.h> 
#include <algorithm>
#include <string>

using namespace std;

string removeduplicates(string str){
	if(str.length()==0){return "";}
	string nodups=removeduplicates(str.substr(1));
	if(str[0]==nodups[0]){
		return nodups;}
	return (str[0]+nodups); }

string transferx(string str){
	if(str.length()==0){
		return "";
	}
	if(str[0]=='x'){
		return (transferx(str.substr(1))+'x');
	}
	else{
		return (str[0]+transferx(str.substr(1)));
	}}

void allsubstring(string str,string ans){
	if(str.length()==0){cout<<ans<<endl;
	return;}
	allsubstring(str.substr(1),ans);
	allsubstring(str.substr(1),ans+str[0]);}

void substringwithint(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
	int code =str[0];
	substringwithint(str.substr(1),ans);
	substringwithint(str.substr(1),ans+str[0]);
	substringwithint(str.substr(1),ans+to_string(code));
	}

string allkeysarr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch= s[0];
	string code=allkeysarr[ch-'0'];
	string ros=s.substr(1);
	for(int i=0;i<code.length();i++){
		keypad(s.substr(1),ans+code[i]);
	}
}

int main(){
	// cout<<removeduplicates("aaabbcccc")<<endl;
	// cout<<transferx("axxbdbdxexwbx")<<endl;
	// allsubstring("ABC","");
	// substringwithint("ab","");
	// keypad("12","");
}



