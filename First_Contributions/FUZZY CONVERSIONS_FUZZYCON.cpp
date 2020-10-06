#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;

    ll x, y, z;
    cin >> x >> y >> z;

    if (x == 0 && y == 0 && z == 0) {
      swap(a, x);
      swap(b, y);
      swap(c, z);
    }

    if (a == 0 && b == 0 && c == 0) {
      if (x == 0 && y == 0 && z == 0) {
        cout << 0 << '\n';
        continue;
      }

      a &= 1;
      b &= 1;
      c &= 1;
      x &= 1;
      y &= 1;
      z &= 1;

      ll cnt = 0;
      if (a == x)
        cnt++;
      if (b == y)
        cnt++;
      if (c == z)
        cnt++;

      ll res = 0;
      if (cnt == 3) {
        cout << 2 << '\n';
      } else if (cnt == 2) {
        cout << 1 << '\n';
      } else if (cnt == 1) {
        cout << 1 << '\n';
      } else if (cnt == 0)
        cout << 2 << '\n';

      continue;
    }

    a &= 1;
    b &= 1;
    c &= 1;
    x &= 1;
    y &= 1;
    z &= 1;

    ll cnt = 0;
    if (a == x)
      cnt++;
    if (b == y)
      cnt++;
    if (c == z)
      cnt++;

    if (cnt == 1 or cnt == 2) {
      cout << 1 << '\n';
    } else
      cout << 0 << '\n';
  }
  return 0;
}

