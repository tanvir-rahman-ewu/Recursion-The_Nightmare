#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(!n)
    {
        return 0;
    }

    return fibonacci(n-1) + fibonacci(n - 2);
}
int main()
{
    cout << fibonacci(6) << endl;
}