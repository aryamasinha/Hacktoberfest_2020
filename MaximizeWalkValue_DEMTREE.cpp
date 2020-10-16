/** Maximize Walk Value (DEMTREE) **/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi g[1001];
int c[1001];
int s[10];
bool r[10][1001][1001];

void dfs(int i, int z, int p)
{
    for (int j = 0; j < 1001; ++j)
    {
        if (r[i][p][j])
        {
            r[i][z][j] = true;
            if (j + c[z] < 1001)
                r[i][z][j + c[z]] = true;
        }
    }

    for (int y : g[z])
        if (y != p) dfs(i, y, z);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n - 1; ++i)
    {
        int x;
        cin >> x;
        g[i + 1].push_back(x);
        g[x].push_back(i + 1);
    }

    for (int i = 1; i <= n; ++i)
        cin >> c[i];

    for (int i = 0; i < m; ++i)
        cin >> s[i];

    for (int i = 0; i < m; ++i)
    {
        r[i][0][0] = true;
        dfs(i, s[i], 0);
    }

    while (q--)
    {
        int b, e, w;
        cin >> b >> e >> w;

        int pv = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = w; j >= 0; --j)
            {
                if (r[i][b][j] && r[i][e][j])
                    pv = max(pv, j);
            }
        }

        cout << 2 * pv << '\n';
    }
}
