#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s)
{
    stack<char> stack;
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ']')
        {
            if (stack.size() == 0 || stack.top() != '[')
            {
                return "NO";
            }
            stack.pop();
        }
        else if (s[i] == '}')
        {
            if (stack.size() == 0 || stack.top() != '{')
            {
                return "NO";
            }
            stack.pop();
        }
        else if (s[i] == ')')
        {
            if (stack.size() == 0 || stack.top() != '(')
            {
                return "NO";
            }
            stack.pop();
        }
        else
        {
            stack.push(s[i]);
        }
    }
    if (stack.size() == 0)
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
