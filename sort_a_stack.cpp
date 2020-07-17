#include <bits/stdc++.h>
using namespace std;

void insert_element(stack<int> &s, int val)
{

    if (!s.size() || s.top() <= val)
    {
        s.push(val);
        return;
    };

    int temp = s.top();

    s.pop();

    insert_element(s, val);

    s.push(temp);
}

void sort_stack(stack<int> &s)
{

    if (s.size() == 1)
        return;

    int temp = s.top();

    s.pop();

    sort_stack(s);

    insert_element(s, temp);
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(1);
    s.push(3);
    s.push(2);
    s.push(7);

    sort_stack(s);

    while (s.size())
    {
        cout << s.top() << " ";

        s.pop();
    }
}