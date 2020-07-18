#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{

    if (k == 1 && n == 1)
        return 0;

    int mid = pow(2, n - 1) / 2;

    if (k <= mid)
    {

        return solve(n - 1, k);
    }
    else
    {

        return !solve(n - 1, k - mid);
    }
}
int main()
{

    int k, n;

    scanf("%d %d", &n, &k);

    int ans = solve(n, k);

    printf("ans : %d\n", ans);
}