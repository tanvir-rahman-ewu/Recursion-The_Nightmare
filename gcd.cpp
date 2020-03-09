#include<bits/stdc++.h>
using namespace std;

int gcd(int v1, int v2)
{
    if(!(v1 % v2))
    {
        return v2;
    }

    return gcd(v2, v1 % v2);
}
int main()
{
    cout << gcd(3768, 1701);
}