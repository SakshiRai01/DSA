#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cout << "Enter n to print W : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1 || j == 0 || i >= n / 2 && (i == j || i + j == n - 1))
                cout << "*\t";
            else
                cout << "\t";
        }
        cout << endl;
    }
}