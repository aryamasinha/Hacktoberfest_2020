#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, temp, count = 0;
        cin >> n;
        unordered_map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            m[temp]++;
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->first != 0)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
