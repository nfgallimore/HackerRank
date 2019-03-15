#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{

    long size = s.length();
    long numStrsFitInN = n / size;

    long numA = 0;
    for (long i = 0; i < size; ++i)
    {
        if (s[i] == 'a')
        {
            ++numA;
        }
    }

    long remA = 0;
    for (long i = 0; i < n % size; ++i)
    {
        if (s[i] == 'a')
        {
            ++remA;
        }
    }
    return numStrsFitInN * numA + remA;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
