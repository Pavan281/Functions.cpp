# Functions in C++
# Write a C++ program to Check Whether a Number can be Express as Sum of Two Prime Numbers.
# Your output need to look something like this : Enter a positive integer: 34 34 = 3 + 31 34 = 5 + 29 34 = 11 + 23 34 = 17 + 17

#include <iostream>
using namespace std;

int main()
{
    int n, i, a = 1, b = 1, c = 0, j;
    float sum = 0;
    cout << "\nCheck Whether the Number can be expressed as the Sum of Two Prime Numbers : \n";
    cin >> n;
    for (i = 2; i <= n / 2; i++) 
    {
        
        a = 1;
        b = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                a = 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
                b = 0;
                j = n - i;
            }
        }
        if (a == 1 && b == 1) 
        {
            cout << n << " = " << i << " + " << n - i << endl;
            c = 1;
        }
    }
    if (c == 0) 
    {
        cout << n << " The Number can not be expressed as the Sum of Two Prime Numbers.";
    }
}
