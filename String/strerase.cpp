#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

	
	//on erasing a substring we have to shift avoid it we have erase
	
	string student="Strings are better tha char arrays";
	student.erase(0,2);//where to delete and how many to delete
	cout<<student<<endl;
	return 0;
}