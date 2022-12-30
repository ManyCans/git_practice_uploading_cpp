#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Returns first repeating int
int firstrepeatingint(int n, int arr[]){
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i;
            }
        }
    }
    return -1;   
}

// This method is from website and learned
int firstrepeatingint2(int n, int arr[]){ 
    const int N=1e6+2;
    int ar2[N];
    for(int i=0;i<N;i++){ar2[i]=-1;}
    int minidx =INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(ar2[arr[i]]!=-1){
                minidx=min(minidx,ar2[arr[i]]);
            }
        else{
            ar2[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){return -1;}
    else{return minidx+1;}
}


int main() {
    int arr[6] ={12,34,6,15,9,30}; 
    cout<<"max len of subarray is "<<firstrepeatingint(6,arr);
    return 0;
}