#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        res = min(res, arr[i]);
    }
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        temp = max(temp, arr[i]);
    }
    cout << "Span of the array is : " << temp - res;
}