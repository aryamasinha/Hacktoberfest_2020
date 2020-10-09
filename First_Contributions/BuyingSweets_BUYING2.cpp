#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    int a[n], s = 0;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a+n);
    int remcost = s % x;
    int m = s/x;
    if(remcost >= a[0]) cout << "-1\n";
    else cout << m << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
