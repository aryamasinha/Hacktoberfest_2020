#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, i;
        cin >> n;
        long long min_no, num;
        cin >> min_no;
        for(i = 1; i < n; i++){
            cin >> num;
            min_no = min(num, min_no);
        }
        cout << (n - 1) * min_no << endl;
    }
    return 0;
}
