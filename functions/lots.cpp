#include <iostream>
#include <math.h>
using namespace std;

int sumn(int a)
{
    return (a * (a + 1)) / 2;
}
bool pyth(int a, int b, int c)
{
    if ((a * a) + (b * b) == (c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int b2d(int bin)
{
    int dec = 0;
    int a = 1;
    while (bin > 0)
    { 
        int y = bin%10;
      
    dec += y*a;
        
        bin = bin / 10;
        a=a*2;
    }
    return dec;
}
int o2d(int a)
{
    int sum = 0;
    int k = 1;
    while (a > 0)
    {
        int l = a % 10;
        if (l != 0)
        {
            sum += pow(8, k-1) * l;
        }
        k++;
        a = a / 10;
    }
    return sum;
}

int main()
{
    cout << b2d(1010) << endl;
    cout << sumn(12) << endl;
    if (pyth(3, 4, 5))
    {
        cout << "3,4,5 are pythaoran triplet" << endl;
    }
    cout << o2d(3271) << endl;

    return 0;
}