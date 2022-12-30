#include <bits/stdc++.h>
using namespace std;


int main(){
	//10 is stored in a address
	int a=10;
	//To store this address we use * variable type(int here)
	int *aptr;
	//address is accessed by '&variable' for any variable
	aptr =&a;
	cout<<aptr<<endl;
	//we can see where address stored is pointing by '*addresspointer' 
	cout<<*aptr<<endl;
	cout<<&a<<endl;
	int ac[3]={10,20,30};
	// a acts as pointer address
	int *ptr =ac; 
	for(int i=0;i<3;i++){
		cout<<*ptr<<" ";
		//Note we cannot put ac++ as it not modifiable ,we can use *(ac+i) instead
		ptr++;
	}

	return 0;
}