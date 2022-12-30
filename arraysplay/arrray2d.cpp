#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // Taking input and giving it back
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    //gives array elements back-O(n^2)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}