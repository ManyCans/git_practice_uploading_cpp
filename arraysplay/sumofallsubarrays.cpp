
#include <iostream>
using namespace std;
// This function prints sum of all possible subarrays
void sosa(int n, int arr[])
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    sosa(6, arr);
    return 0;
}