#include <bits/stdc++.h>
using namespace std;

void permutation_with_case(string input, string output)
{

    if (!input.length())
    {
        cout << output << endl;
        return;
    }

    string o1 = output;
    string o2 = output;

    o1.push_back(input[0]);
    o2.push_back(input[0] - 32);

    input.erase(input.begin() + 0);

    permutation_with_case(input, o1);
    permutation_with_case(input, o2);
}

int main()
{

    string input = "ab", output = "";

    permutation_with_case(input, output);
}