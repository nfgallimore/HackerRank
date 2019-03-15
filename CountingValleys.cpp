#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int seaLevel;
    int numValleys;
    bool inValley;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'U')
        {
            seaLevel++;
            if (seaLevel == 0)
            {
                inValley = false;
            }
        }
        else if (s[i] == 'D')
        {
            seaLevel--;
            if (seaLevel == -1)
            {
                inValley = true;
                ++numValleys;
            }
        }
    }

    return numValleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
