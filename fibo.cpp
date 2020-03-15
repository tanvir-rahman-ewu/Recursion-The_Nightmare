#include<bits/stdc++.h>
using namespace std;

int memory[100];

int fibo(int n)
{
    if(n < 2)
    {
        return n;
    }

    if(memory[n] != -1)
    {
        return memory[n];
    }

    memory[n] = fibo(n - 1) + fibo(n - 2);

    return memory[n];
}

int main()
{
    memset(memory, -1, sizeof(memory));

    cout << fibo(6) << endl;
}
/// 0 1 1 2 3 5 8
