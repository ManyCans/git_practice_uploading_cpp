#include <bits/stdc++.h>

using namespace std;

int main(){
	int a =10; //Stores data in Stack
	
	int *b = new int();// Allocates int memory in heap
	
	*b=20; //Heap memory can be accessed in any fuction unlike Stack
			//Also Heap allocates dynamic  memory
	
	//Note: That we create pointer in stack that point to data in heap
	//       As its can't be accessed another way
	
	// We must also delete  our memory
	delete(b);
	//After deleting we have a dangling pointer as it points at no value
	
	//We can reuse it or remove it
	
	b=new int[4];
	delete[] b; //Deleting an array in heap
	b=NULL; 	//In heap we have to allocate and deallocate memory manually
	return 0;
}