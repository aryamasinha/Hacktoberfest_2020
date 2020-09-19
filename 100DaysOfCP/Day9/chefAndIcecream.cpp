#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int c=0,c1=0;
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int x = a[i];
            if(x == 5){
                c++;
            }
            else if(x == 10){
                if(c){
                    c--;
                    c1++;
                }
                else{
                    flag = false;
                    break;
                }
            }
            else{
                if(c1){
                    c1--;
                }
                else if(c>=2){
                    c-=2;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
