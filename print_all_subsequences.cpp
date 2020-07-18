#include <bits/stdc++.h>
using namespace std;

void print_all_subseq(string input, string output)
{

    if (!input.length())
    {
        cout << output << endl;
        return;
    }

    string o1 = output;
    string o2 = output;

    o2.push_back(input[0]);

    input.erase(input.begin() + 0);

    print_all_subseq(input, o1);
    print_all_subseq(input, o2);
}
int main()
{

    string input = "abc", output = "";

    print_all_subseq(input, output);
}