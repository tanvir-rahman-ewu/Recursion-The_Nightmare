#include<bits/stdc++.h>
using namespace std;

string ss ="";
void reverse_string(string s, int i = 0)
{
    if(i == s.length())
    {
        return;
    }
    reverse_string(s, i + 1);

    ss.push_back(s[i]);
}
int main()
{
    string s = "iamagoodboy";

    reverse_string(s);

    cout << ss ;
}