#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int totalPairs = 0;
        for(int i=0;i<str.length()-1;i++){
            if((str[i] == 'x') && (str[i+1] == 'y') ||  (str[i] == 'y') && (str[i+1] == 'x')){
                totalPairs++;
                i++;
            }
        }
        cout<<totalPairs<<endl;
    }
	return 0;
}