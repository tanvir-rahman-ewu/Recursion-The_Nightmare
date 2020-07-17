#include <bits/stdc++.h>
using namespace std;

void insert_at_last(stack<int> &s, int val)
{

    if (!s.size())
    {
        s.push(val);
        return;
    }

    int temp = s.top();

    s.pop();

    insert_at_last(s, val);

    s.push(temp);
}

void reverse_stack(stack<int> &s)
{

    if (s.size() == 1)
    {
        return;
    }

    int temp = s.top();

    s.pop();

    reverse_stack(s);

    insert_at_last(s, temp);
}

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverse_stack(s);

    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
}