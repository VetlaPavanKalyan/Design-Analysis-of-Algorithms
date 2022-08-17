#include <bits/stdc++.h>
using namespace std;
int a[20][20], reach[20] = {0}, n, i, j;
void dfs(int);
int main()
{
    int c = 0;
    cout << "Enter no. of vertices:";
    cin >> n;
    cout << "Enter Adjacency matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    dfs(0);
    for (i = 0; i < n; i++)
    {
        if (reach[i])
        {
            c++;
        }
    }
    if (c == n)
        cout << "Graph is connected" << endl;
    else
        cout << "Graph is not connected" << endl;
    return 0;
}
void dfs(int v)
{
    reach[v] = 1;
    for (i = 0; i < n; i++)
    {
        if (a[v][i] && !reach[i])
        {
            cout << v + 1 << " -> " << i + 1 << endl;
            dfs(i);
        }
    }
}