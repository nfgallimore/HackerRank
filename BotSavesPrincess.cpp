#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid)
{
    int col = (n - 1) >> 1;
    int row = (n - 1) >> 1;
    
    for(int i = 0; i < (n - 1) >> 1; ++i)
    {
        cout << "DOWN\n";
        row++;
        if (grid[row][col] == 'p')
        {
            return;
        }
    }
    for(int i = 0; i < (n - 1) >> 1; ++i)
    {
        cout << "LEFT\n";
        col--;
        if (grid[row][col] == 'p')
        {
            return;
        }
    }
    for(int i = 0; i < n - 1; ++i)
    {
        cout << "UP\n";
        row--;
        if (grid[row][col] == 'p')
        {
            return;
        }
    }
    for(int i = 0; i < n - 1; ++i)
    {
        cout << "RIGHT\n";
        col++;
        if (grid[row][col] == 'p')
        {
            return;
        }
    }
    for(int i = 0; i < n - 1; ++i)
    {
        cout << "DOWN\n";
        row++;
        if (grid[row][col] == 'p')
        {
            return;
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
