#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int minimum = INT_MAX;
        for(int i=0;i<n;i++){
            minimum = min(a[i],minimum);
        }
        int res = 0;
        for(int i=0;i<n;i++){
            res += abs(a[i]-minimum);
        }
        cout<<res<<endl;
    }
	return 0;
}
