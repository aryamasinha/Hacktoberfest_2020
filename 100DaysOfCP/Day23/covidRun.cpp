#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int i=x;
        do{
            i = (i+k)%n;
            if(i == y){
                break;
            }
        }while(i != x);
        if(i == y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
