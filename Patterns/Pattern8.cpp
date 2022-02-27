#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter value of n to print the pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "\t";
        }
        cout << "*";
        cout << endl;
    }
}