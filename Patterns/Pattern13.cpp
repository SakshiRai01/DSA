#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout << "Enter n t print the pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int icj = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << icj << "\t";
            int icj1 = (icj * (i - j)) / (j + 1);
            icj = icj1;
        }
        cout << endl;
    }
}