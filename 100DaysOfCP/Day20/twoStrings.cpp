#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int diff = 0;
	    int countQues = 0;
	    for(int i=0;i<s1.length();i++){
	        if((s1[i] != s2[i]) && (s1[i] != '?') && (s2[i] != '?')){
	            diff++;
	        }
	        if((s1[i] == '?') || (s2[i] == '?')){
	            countQues++;
	        }
	    }
	    cout<<diff<<" "<<(diff+countQues)<<endl;
	}
	return 0;
}
	