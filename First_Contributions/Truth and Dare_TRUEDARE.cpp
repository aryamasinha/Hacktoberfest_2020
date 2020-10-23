#include<bits/stdc++.h>
using namespace std;
void getInput(int &size,unordered_set<int> &v){
    cin>>size;
    for(int i=0;i< size;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n_tr,n_dr,n_ts,n_ds;
        unordered_set<int> tr,dr,ts,ds;
        getInput(n_tr,tr);
        getInput(n_dr,dr);
        getInput(n_ts,ts);
        getInput(n_ds,ds);
        bool flag =true;
        for(auto x:ts){
            if(tr.find(x)==tr.end()){
                flag = false;
                break;
            }
        }
        for(auto x:ds){
            if(dr.find(x)==ds.end()){
                flag = false;
                break;
            }
        }

        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}