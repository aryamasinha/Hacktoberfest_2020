#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        vector<long long> v;
        cin>>k;
        bool flag = false;
        for(int i=0;i<k;i++){
            long long x;
            cin>>x;
            if(!(x&1))
                flag = true;
            v.push_back(x);
        }
        if(!(k&1)){
            cout<<0<<endl;
            continue;
        }
        if(flag){
            cout<<1<<endl;
            continue;
        }
        long long m=LONG_LONG_MAX;
        for(int i=0;i<k;i++){
            int pos =-1;
            for(int j=0;j<64;j++){
                int a = (v[i]>>j)&1;
                if(!((v[i]>>j)&1)){
                    pos = j;
                    break;
                }
            }
            long long val = pow(2,pos)+0.5;
            if(pos==-1 || val>v[i]){
                continue;
            }
            else{
                m=min(m,val);
            }
        }
        if(m!=LONG_LONG_MAX)
            cout<<m<<endl;
        else
            cout<<-1<<endl;
    }
}