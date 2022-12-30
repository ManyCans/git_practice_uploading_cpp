#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//Check if num at pos is 1 or not
int getbit(int num,int pos){
	return ((num & (1<<pos))!=0);
}
//return num with bit at pos as 1
int setbit(int num,int pos){
	return ((num|(1<<pos)));
}

//Clears or sets bit at pos to zero
int clearbit(int num,int pos){
	//Called masking
	return ((num)&(~(1<<pos)));
}

int updatebit(int num,int pos,int updnum){
	//Clear bit at pos and set it with updnum
	int mask=~(1<<pos);
	num=num & mask;
	return (num | (updnum<<pos));
}


int main(){
	cout<<getbit(5,2)<<endl;
	cout<<setbit(5,1)<<endl;
	cout<<clearbit(7,1)<<endl;
	cout<<updatebit(10,1,0)<<endl;
	
}