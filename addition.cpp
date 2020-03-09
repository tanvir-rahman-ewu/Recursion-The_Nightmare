#include<iostream>

using namespace std;

int add(int n)
{
    if(!n)
    {
        return 0;
    }

    return n + add(n - 1);
}


int main()
{
    cout << "hello world " << endl;

    cout << add(5) << endl;
}