#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	string s1="abc";
	string s2="xyz";
	cout<<s2.compare(s1)<<endl; //gives 23 as x-a
	// s2.clear();
	if(s2.empty()){
		cout<<"string is empty"<<endl;
	}
	if(!s2.empty()){
		cout<<"String is not empty"<<endl;
	}
	
	//on erasing a substring we have to shift avoid it we have erase
	
	string student="Strings are better tha char arrays";
	student.erase(0,2);//where to delete and how many to delete
	cout<<student<<endl;
	return 0;
}