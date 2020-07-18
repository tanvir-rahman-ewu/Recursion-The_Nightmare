#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int s, int d, int h, int n)
{

    if (n == 1)
    {
        cout << "moving " << n << " from " << s << " to " << d << endl;
        return;
    }

    tower_of_hanoi(s, h, d, n - 1);

    cout << "moving " << n << " from " << s << " to " << d << endl;

    tower_of_hanoi(h, d, s, n - 1);
}

int main()
{

    int s = 1, d = 3, h = 2, n;

    cin >> n;

    tower_of_hanoi(s, d, h, n);
}