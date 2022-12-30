#include <iostream>
using namespace std;
int norecbreday(int n, int arr[]){
    int no=0;
    int max= arr[0];
    for(int i =1;i<n-1;i++){
        if(arr[i]>max && arr[i]>arr[i+1]){
            no++;
        }
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    if(arr[n-1]>max){no++;}
    if(arr[0]>arr[1]){no++;}
    if(n==1){return 1;}
    return no;
}

int main() {
    int arr[6] ={12,34,6,5,4,30};
    cout<<"max len of subarray is "<<norecbreday(6,arr);
    return 0;
} 