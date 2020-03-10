#include<bits/stdc++.h>
using namespace std;

void queue_to_stack(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }

    int x = q.front();

    q.pop();


    queue_to_stack(q);

    q.push(x);
}
int main()
{
    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    queue_to_stack(q);

    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    
}