#include<iostream>
using namespace std;

int sum(int a[], int i)
{
    if(i == -1)
    {
        return 0;
    }

    if(a[i] % 2 == 0)
    {
        return a[i] + sum(a, i - 1);
    }
    else
    {
        return sum(a, i - 1);
    }
    
}
int main()
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int len = sizeof(arr) / sizeof(arr[0]);

    cout << sum(arr, len - 1) << endl;
}