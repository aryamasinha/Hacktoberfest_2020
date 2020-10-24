#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        int max = 0;
        int max_element = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto x:mp){
            if(x.second>max){
                max = x.second;
                max_element = x.first;
            }
        }
        cout<<n-max<<endl;
    }
}