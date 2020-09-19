#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int element;
        int temp[n];
        int j= 0;
        for(int i=0;i<n;i++){
            cin>>element;
            if(element == 1){
                temp[j++] = i; 
            }
        }
        bool flag = true;
        for(int i=j-1;i>=1;i--){
            if((temp[i]-temp[i-1]) < 6){
                flag = false;
                break;
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
