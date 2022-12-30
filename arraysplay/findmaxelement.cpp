#include <iostream>
using namespace std;

int maxarr(int n, int arr[]){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){max = arr[i];} 
        //  Note : if we change library we can use max(a,b) for the statement same as line 7 
    }
    return max;
}
int main() {
    int arr[6] ={12,34,6,15,9,30};
    cout<<"Max element of array is "<<maxarr(6,arr);
    return 0;
}