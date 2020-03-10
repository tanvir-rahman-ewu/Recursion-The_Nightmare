#include<bits/stdtr1c++.h>
using namespace std;

void generate_sub_array(int arr[], int s, int e, int len)
{
    if(s == len)
    {
        return;
    }

    

    if(s > e)
    {
        generate_sub_array(arr, s + 1, len - 1, len);
    }
    else
    {
        for(int i = s; i <= e ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        generate_sub_array(arr, s, e - 1, len);
    }
    


}
int main()
{
    int arr [] = {1, 2, 3, 4, 5};

    int len = sizeof(arr) / sizeof(arr[0]);

    generate_sub_array(arr, 0, len - 1, len);
}