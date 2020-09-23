#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int freq[1001] = {0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    int unique[1001] = {0};
	    for(int i=0;i<1001;i++){
	        if(freq[i] > 0){
	            unique[freq[i]]++;
	        }
	    }
	    bool flag = true;
	    for(int i=0;i<1001;i++){
	        if(unique[i] > 1){
	            flag = false;
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"NO"<<endl;
	    }
	    else{
	        bool visited[1001] = {false};
	        visited[a[0]] = true;
	        int i;
	        for(i=1;i<n;i++){
	            if(a[i] == a[i-1]){
	                continue;
	            }
	            else{
	                if(visited[a[i]]){
	                    break;
	                }
	                else{
	                    visited[a[i]] = true;
	                }
	            }
	        }
	        if(i == n){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	} 
	return 0;
}
