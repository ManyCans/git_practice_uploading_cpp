#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int dectobin(int a){
    int base=1;
    int sum =0;
while(base<=a)
{   base*=2; }
base/=2;
while(base>0){
    int ldig = a/base;
    a-=ldig*base;
    base/=2;
    sum = sum*10 +ldig;
}
return sum;
}
int dectooct(int n){
    int sum=0;
    int b =1;
    while(b<=n){b *= 8;}
    b/=8;
    while(b!=0){
        int ldig = n/b;
        n-= ldig*b;
        sum = sum*10 +ldig;
        b/=8;
    }
    return sum;
}
string dectohex(int n){
    string a="";
    int b;
    while(b<=n){b*=16;}
    b/=16;
    while(b>0){
        int ldig = n/b;
        n -= ldig*b;  
        b/=16;
    if(ldig<=9){
        a= a +to_string(ldig);
    }
    else{
        char c= 'a'+ldig -10;
        a=  a+c;
    }
    }
}

int main(){


    return 0;
}