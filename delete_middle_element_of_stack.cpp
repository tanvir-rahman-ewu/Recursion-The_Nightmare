#include <bits/stdc++.h>
using namespace std;

void delete_middle_element(stack<int> &s, int k)
{

    if (k == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();

    s.pop();

    delete_middle_element(s, k - 1);

    s.push(temp);
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    delete_middle_element(s, (s.size() / 2) + 1);

    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
}