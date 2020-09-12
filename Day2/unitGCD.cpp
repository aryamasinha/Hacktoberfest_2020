#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n == 1){
            cout<<1<<endl<<"1 1"<<endl;
        }
        else if(n == 2){
            cout<<1<<endl<<"2 1 2"<<endl;
        }
        else if(n == 3){
            cout<<1<<endl<<"3 1 2 3"<<endl;
        }
        else{
            int totalDays = n/2;
            cout<<totalDays<<endl;
            if(n&1){
                cout<<"3 1 2 3"<<endl;
                for(int i=4;i<n;i+=2){
                    cout<<"2 "<<i<<" "<<(i+1)<<endl;
                }
            }
            else{
                for(int i=1;i<n;i+=2){
                    cout<<"2 "<<i<<" "<<(i+1)<<endl;
                }
            }
        }
    }
	return 0;
}