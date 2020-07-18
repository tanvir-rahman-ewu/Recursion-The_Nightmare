//abc a-bc a-b-c ab-c
#include <bits/stdc++.h>
using namespace std;

void permutation_with_space(string input, string output)
{

    if (!input.length())
    {
        cout << output << endl;
        return;
    }

    string o1 = output;
    string o2 = output;

    o2.push_back('-');
    o2.push_back(input[0]);

    o1.push_back(input[0]);

    input.erase(input.begin() + 0);

    permutation_with_space(input, o1);
    permutation_with_space(input, o2);
}
int main()
{

    string input, output = "";

    cin >> input;

    output.push_back(input[0]);

    input.erase(input.begin() + 0);

    permutation_with_space(input, output);
}