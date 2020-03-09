#include<iostream>
using namespace std;

void mean(int arr[], int i, int sum)
{
    if(!i)
    {
        sum += arr[i];
        
        sum /= 9;

        cout << sum << endl;

        return;
    }

    sum += arr[i];

    mean(arr, i - 1, sum);
}
int main()
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    mean(arr, 8, 0);
}