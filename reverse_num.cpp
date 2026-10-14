#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Reversing a number
    int n;
    cout << "Enter a number \n";
    cin >> n;

    // n=1234

    int rev_n = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        rev_n = (rev_n * 10) + last_digit;
        n = n / 10;
    }
    cout << "reversed number is: " << rev_n;

    return 0;
}