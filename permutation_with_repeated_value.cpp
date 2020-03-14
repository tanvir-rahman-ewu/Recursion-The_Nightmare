#include<bits/stdc++.h>
using namespace std;

map<char, int> m;

void print(char ans[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << ans[i];
    }
    cout << '\n';
}

void permutation(string ss, int l, int r, char ans[]){

    if(l == r)
    {
        print(ans, r);

        return;
    }

    for(int i = 0; i < ss.length(); i++)
    {
        if(m[ss[i]] == 0)
        {
            continue;
        }
    
        ans[l] = ss[i];

        m[ans[l]]--;

        permutation(ss, l + 1, r, ans);

        m[ss[i]]++;
        
    }
}

int main()
{
    string s = "AABC";
    
    char a[s.length()];

    for(int i = 0; s[i]; i++)
    {
        m[s[i]]++;
    }

    map<char, int>:: iterator it;

    string ss;

    for(it = m.begin(); it != m.end(); it++)
    {
        ss = ss + it->first;
    }

    permutation(ss, 0, s.length(), a);
}