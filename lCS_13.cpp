#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, x, y;
    vector<int> a, b, c;
    cout << "Enter no. of integers:" << endl;
    cin >> n;
    cout << "Enter Integers:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        a.push_back(j);
        b.push_back(j);
    }
    sort(b.begin(), b.end());
    int m[n + 1][n + 1];
    for (i = 0; i <= n; i++)
    {
        m[i][0] = 0;
        m[0][i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i - 1] != b[j - 1])
            {
                m[i][j] = max(m[i][j - 1], m[i - 1][j]);
            }
            else
            {
                m[i][j] = m[i - 1][j - 1] + 1;
            }
        }
    }
    cout << m[n][n] << endl;
    x = n;
    y = n;
    while (m[x][y] > 0)
    {
        if (m[x][y] == m[x - 1][y])
        {
            x--;
        }
        else if (m[x][y] == m[x][y - 1])
        {
            y--;
        }
        else
        {
            x--;
            y--;
            c.push_back(b[y]);
        }
    }
    reverse(c.begin(), c.end());
    for (i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}