#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int a[100010];
ll preSum[100010];
stack<int> s;
pair <int, ll> countSub[100010];

void pre(int n){
    int lt[100010], rt[100010];
    int av, bv;
    int i = 0;
    while(i < n){
        while(s.empty() == false && a[s.top()] < a[i]){
            rt[s.top()] = i;
            s.pop();
        }
        s.push(i);
        i++;
    }
    while(s.empty() == false){
        rt[s.top()] = n;
        s.pop();
    }
    i = n-1;
    while(i >= 0){
        while(s.empty() == false && a[s.top()] <= a[i]){
            lt[s.top()] = i;
            s.pop();
        }
        s.push(i);
        i--;
    }
    while(s.empty() == false){
        lt[s.top()] = -1;
        s.pop();
    }
    for(i = 0; i < n; i++){
        av = i - lt[i];
        bv = rt[i] - i - 1;
        countSub[i] = make_pair(a[i], (ll)(bv+1)*(ll)av);
    }
    sort(countSub, countSub+n, greater<pair<int, ll>>());
    preSum[0] = countSub[0].second;
    for(i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + countSub[i].second;
    }
}

int solve(int n, ll p){
    int low, high, mid;
    low = 0;
    high = n-1;
    while(low < high){
        mid = (low + high)/2;
        if(preSum[mid] >= p){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return countSub[high].first;
}

void doThis(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    pre(n);
    while(m--){
        ll p;
        cin >> p;
        cout << solve(n, p) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        doThis();
    }
    return 0;
}
