#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int k,x;
	    cin>>k>>x;
	    int res = 0;
	    int freq[26] = {0};
	    for(int i=0;i<str.length();i++){
	        freq[str[i] - 'a']++;
	        if(freq[str[i] - 'a'] > x){
	            if(k>0){
	                freq[str[i] - 'a']--;
	                k--;
	            }
	            else{
	                break;
	            }
	        }
	        else{
	            res++;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
