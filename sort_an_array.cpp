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

void sort_array(vector<int> &v)
{

    if (v.size() == 1)
    {
        return;
    }

    int temp = v[v.size() - 1];

    v.pop_back();

    sort_array(v);

    insert_element(v, temp);
}

int main()
{

    vector<int> v;

    v.push_back(5);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    sort_array(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}