// C++ program to print the fibonacci numbers from 1-20 and replace the answers of prime numbers and multiples of 5 with 0.

#include <bits/stdc++.h>
using namespace std;

int dp[22];

// Function to check multiples of 5

bool multiple(int n)
{
    if (n % 5 == 0)
        return true;

    return false;
}

// Function to check pime numbers

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n == 2)
        return true;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// Function to calculate fibonacci series.

void fib(int n)
{
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main()
{
    int ans[20];

    fib(20);

    for (int i = 1; i <= 20; i++)
    {
        if (isPrime(i) or multiple(i))
        {
            ans[i - 1] = 0;
        }

        else
        {
            ans[i - 1] = dp[i];
        }
    }

    // Printing the final answer.

    for (int i = 0; i < 20; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
