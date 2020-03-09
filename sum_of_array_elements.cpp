#include<iostream>
using namespace std;


int sum(int arr[], int i)
{
    if(!i)
    {
        return arr[i];
    }
    return arr[i] + sum(arr, i - 1);
}

int main()
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << sum(arr, sizeof(arr) / sizeof(arr[0]) - 1);
}