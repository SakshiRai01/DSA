#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> a[i];
    }
    int d;
    cout << "Enter the element to be found : ";
    cin >> d;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == d)
            index = i;
    }
    cout << "Index of the number searched : " << index;
}