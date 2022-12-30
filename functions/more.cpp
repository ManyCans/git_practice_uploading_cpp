#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int hx2d(string x)
{
    int ans = 0;
    int mul = 1;
    int sizee = x.size();
    for (int i = sizee - 1; i >= 0; i--)
    {
        if (x[i] >= '0' && x[i] <= '9')
        {
            ans += (x[i] - '0') * mul;
        }
        else if (x[i] >= 'a' && x[i] <= 'f')
        {
            ans += (x[i] + 10 - 'a') * mul;
        }
        mul *= 16;
    }
    return ans;
}

int main()
{

    cout << hx2d("d") << endl;
    return 0;
}