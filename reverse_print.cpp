#include<bits/stdc++.h>

using namespace std;

void reverse_print(int n)
{
    if(n == -1)
    {
        return;
    }

    cout << n << " ";

    reverse_print(n - 1);
}

int main()
{
    reverse_print(10);
}