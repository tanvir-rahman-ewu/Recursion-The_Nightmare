#include<iostream>
using namespace std;

void isPalindrome(int arr[], int s, int e)
{
    if(s == e)
    {
        cout << "yes" << endl;
        return;
    }

    if(arr[s] == arr[e])
    {
        isPalindrome(arr, s + 1, e - 1);
    }
    else
    {
        cout << "No" << endl;
        return;
    }
    
}
int main()
{
    int arr [] = { 3, 6, 0, 5, 3};

    isPalindrome(arr, 0, 4);
}