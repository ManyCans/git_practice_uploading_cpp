#include <iostream>
using namespace std;

//Contains max no of continnously increasing subarray
int contmaxlensras(int n, int arr[]){
    int combo =1;
        int max_combo =1;
        int comdif= arr[0]-arr[1];
    for(int i = 1 ; i<n ;i++){
        if(comdif==(arr[i]-arr[i+1])){
            combo++;
        }
        else{
            combo =1;
            comdif=arr[i]-arr[i+1];
        }
        if(combo>max_combo){
            max_combo =combo;
        }
    }
    return max_combo+1;
}


int main() {
    int arr[6] ={12,34,6,15,9,30};
    cout<<"max len of subarray is "<<contmaxlensras(6,arr);
    return 0;
}