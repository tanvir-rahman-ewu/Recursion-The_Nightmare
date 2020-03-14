#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int l, int r)
{
    if(l == r)
    {
        cout << s << endl;
    }

    for(int i = l; i <= r; i++)
    {
        swap(s[i], s[l]);

        permutation(s, l + 1, r);
    }
}
int main()
{
    string s = "ABC";

    permutation(s, 0, s.length() - 1);

}

///abc acb bac bca cab abc