#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter value of n to print the pattern : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "\t";
        }
        cout << "*" << endl;
    }
}