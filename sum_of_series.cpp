#include<bits/stdc++.h>
using namespace std;

int sum_of_serires(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * n +  sum_of_serires(n - 1);
}
int main()
{
    cout << sum_of_serires(5) << endl;
}