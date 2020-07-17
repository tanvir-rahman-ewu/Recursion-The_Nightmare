#include <bits/stdc++.h>
using namespace std;

void insert_element(vector<int> &v, int val)
{

    if (!v.size() || v[v.size() - 1] <= val)
    {
        v.push_back(val);
        return;
    }

    int temp = v[v.size() - 1];

    v.pop_back();

    insert_element(v, val);

    v.push_back(temp);
}

int main()
{

    vector<int> v;

    v.push_back(0);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);

    sort(v.begin(), v.end());

    insert_element(v, 2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}