#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

    unordered_map<char, bool> map;

    for(int i = 0; i < s2.length(); ++i)
    {
        map[s2[i]] = false;
    }
    
    for (int i = 0; i < s1.length(); ++i)
    {
        map[s1[i]] = true;
    }

    for (int i = 0; i < s2.length(); ++i)
    {
        if (map[s2[i]])
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
