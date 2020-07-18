#include <bits/stdc++.h>
using namespace std;

char rev(char c)
{
    c > 64 &&c < 97 ? c = c + 32 : c = c - 32;
    return c;
}

void letter_case_permutation(string input, string output)
{

    if (!input.length())
    {
        cout << output << endl;
        return;
    }

    string o1 = output;
    string o2 = output;

    o1.push_back(input[0]);
    o1.push_back(input[1]);
    o2.push_back(rev(input[0]));
    o2.push_back(input[1]);

    input.erase(input.begin() + 0);
    input.erase(input.begin() + 0);

    letter_case_permutation(input, o1);
    letter_case_permutation(input, o2);
}

int main()
{

    string input = "a1b2", output = "";

    letter_case_permutation(input, output);
}