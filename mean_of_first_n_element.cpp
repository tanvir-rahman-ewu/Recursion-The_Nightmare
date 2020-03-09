#include<bits/stdc++.h>
using namespace std;

double sum(double n)
{
    if(n == 1)
    {
        return 1;
    }

    return (sum(n - 1) * (n - 1) + n) / n;
}
int main()
{
    cout << sum(5) << endl;
}