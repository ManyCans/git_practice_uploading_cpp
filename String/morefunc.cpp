#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	string student="Strings are better tha char arrays.";
	cout<<student.find("better")<<endl; //Gives us location of key
	student.insert(22,"n");
	cout<<student<<endl;
	//finding length
	
	cout<<student.size()<<" "<<student.length()<<endl;
	for(int i=0;i<student.length();i++){
		cout<<student[i]<<" ";
	}
    string student="Strings.";
	string s1 =student.substr(2,4);//We want substring from 2nd position , 4 char 
	cout<<s1<<endl;
	
	return 0;
}