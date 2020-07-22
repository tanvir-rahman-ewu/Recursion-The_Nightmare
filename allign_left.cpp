#include <bits/stdc++.h>
using namespace std;

int mx_width = 30;

void allign_left(string s, int start, int end)
{

    if (end >= s.size())
    {
        for (int i = start; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
        return;
    }

    while (s[end] != ' ')
    {
        end--;
    }

    for (int i = start; i < end; i++)
    {
        cout << s[i];
    }
    cout << endl;

    start = end + 1;

    end = end + 30;

    allign_left(s, start, end);
}

int main()
{
    string s;

    s = "At vero eos et accusamus et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque corrupti quos dolores et quas molestias excepturi sint occaecati cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia animi, id est laborum et dolorum fuga. Et harum quidem rerum facilis est et expedita distinctio. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Itaque earum rerum hic tenetur a sapiente delectus, ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.";

    allign_left(s, 0, 30);
}