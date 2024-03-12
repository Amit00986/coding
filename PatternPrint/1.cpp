/* 1
 * * * *
 * * * *
 * * * *
 * * * *
 */

// Print pattern

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

/* 2.
 *
 * *
 * * *
 * * * *
 */
void pattern2(int n)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

/* 3.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void pattern3(int n)
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void pattern4(int n)
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/* 5
 * * *
 * *
 *
 */

void pattern5(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}