#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b; cin >> a >> b;
    int diff = a - b;
    if(diff % 10 == 9) diff--;
    else diff++;
    cout << diff << "\n";
}
