#include <bits/stdc++.h>
using namespace std;

int main()
{
    // print all divisors
    int n;
    cout << "Enter a number \n";
    cin >> n;

    // n=36
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}