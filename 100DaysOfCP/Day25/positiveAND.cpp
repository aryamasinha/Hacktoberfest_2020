#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(vector <int> v){
    for(int i=1;i<v.size();i++){
        if((v[i] & v[i-1]) <= 0){
            return false;
        }
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
	    for(int i=1;i<=n;i++){
	        a.push_back(i);
	    }
	    bool flag = false;
	    do{
	        if(isBeautiful(a)){
	            flag = true;
	            break;
	        }
	    }while(next_permutation(a.begin(),a.end()));
	    if(!flag){
	        cout<<-1<<endl;
	    }
	    else{
	        for(int i=0;i<a.size();i++){
	            cout<<a[i]<<" ";
	        }
	        cout<<endl;    
	    }
	}
	return 0;
}
