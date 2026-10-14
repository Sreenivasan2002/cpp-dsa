#include <bits/stdc++.h>
using namespace std;

int main()
{
    // palindrome a number
    int n;
    cout << "Enter a number \n";
    cin >> n;

    // n=1221
    int num = n;
    int rev_n = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        rev_n = (rev_n * 10) + last_digit;
        n = n / 10;
    }
    if (num == rev_n)
    {
        cout << num << "is a palindrome number";
    }

    return 0;
}