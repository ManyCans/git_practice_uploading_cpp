#include <iostream>
using namespace std;
int findindex(int arr[],int n,int need){ //O(n) time complexity
    for(int i = 0;i<n;i++){
        if(arr[i]==need){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int n,int need){ //O(nlogn) time complexity
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==need){return mid;}
        else if(arr[mid]>need){e = mid-1;}
        else{s = mid+1;}
    }
    return -1;
}
void selectionsort(int arr[],int n){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j < n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] =arr[i];
                arr[i] =temp;
            }
        }
    }
    for(int i= 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int n , int arr[]){
    for(int i = n; i != 0; i--){
        for(int j = 0; j < i; j++){
                if(arr[j]>arr[j+1]){
                    int temp  = arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i =0 ;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
void insertionsort(int n,int arr[]){
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j>0; j--){
                if(arr[j]<arr[j-1]){
                    int temp =arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                } 
            }
        }
        for(int i =0 ;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
 
int main(){

    return 0;
}